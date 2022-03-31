#include <iostream>
#include <algorithm>
#include <chrono>

#include "message.h"
#include "orderedList.h"
#include "node.h"


Message::Message(const std::string new_text){
    text_to_send = new_text;
}

std::string Message::getText() const{
    return text_to_send;
}

void Message::setText(std::string new_text){
    text_to_send = new_text;
}

int Message::findBestDivisor(int num){
    int text_length = text_to_send.length();
    int divisions = num;

    // Finding a divisor less or equal to the given number
    if (divisions < 1) throw std::invalid_argument("Number of divisions cannot be less than 1");
    while(text_length % divisions){
        --divisions;
        std::cerr << "Given divisor does not divide without a remainder. Decreasing divisor value to: " << divisions << std::endl;
    }
    
    return divisions;
}

OrderedList<std::string>* Message::sendMessage(int packages_num){
    OrderedList<std::string>* sent_packages = new OrderedList<std::string>();
    int text_length = text_to_send.length();
    int divisions = findBestDivisor(packages_num);
    int package_size = text_length/divisions;


    for (int i=0; i<divisions; ++i){
        sent_packages->addNode(i, new std::string(text_to_send.substr(i*package_size, package_size)));
    }

    return sent_packages;
}

OrderedList<std::string>* Message::shuffle(OrderedList<std::string>* list_to_shuffle){
    OrderedList<std::string>* new_list = new OrderedList<std::string>();
    Node<std::string>* current_node;
    std::string* current_value;
    int* keys = list_to_shuffle->getKeys();
    int current_size = list_to_shuffle->getSize();
    int current_key;

    std::random_shuffle(&keys[0], &keys[current_size]);

    for(int i=current_size-1; i>=0; i--){
        current_key = keys[i];
        current_node = list_to_shuffle->removeAny(current_key);
        current_value = current_node->getValue();
        new_list->addNode(current_key, current_value);

        delete current_node;
    }
    delete keys;
    delete list_to_shuffle;

    return new_list;
}

OrderedList<std::string>* Message::receive(OrderedList<std::string>* list_to_unshuffle){
    OrderedList<std::string>* new_list = new OrderedList<std::string>();
    Node<std::string>* current_node;
    std::string* current_value;
    int current_key;


    while(list_to_unshuffle->getSize() > 0){
        current_node = list_to_unshuffle->removeMin();
        current_value = current_node->getValue();
        current_key = current_node->getKey();
        new_list->addNode(current_key, current_value);

        delete current_node;
    }

    delete list_to_unshuffle;

    return new_list;
}
