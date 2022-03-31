#include <iostream>

#include "orderedList.h"
#include "node.h"


template<typename T>
OrderedList<T>::OrderedList(){
    head = nullptr;
    size = 0;
}

template<typename T>
int* OrderedList<T>::getKeys() const{
    Node<T>* node_to_read = head;
    int array_size = getSize();
    int* array_of_keys = new int[array_size];
    int iterator = 0;

    while(node_to_read != nullptr){
        array_of_keys[iterator] = node_to_read->getKey();
        iterator++;
        node_to_read = node_to_read->getPrevious();
    }

    return array_of_keys;
}

template<typename T>
T** OrderedList<T>::getValues() const{
    Node<T>* node_to_read = head;
    int array_size = getSize();
    T** array_of_values = new T*[array_size];
    int iterator = 0;

    while(node_to_read != nullptr){
        array_of_values[iterator] = node_to_read->getValue();
        iterator++;
        node_to_read = node_to_read->getPrevious();
    }

    return array_of_values;
}

template<typename T>
int OrderedList<T>::getSize() const{
    return size;
}

template<typename T>
void OrderedList<T>::setSize(int new_value){
    size = new_value;
}

template<typename T>
int OrderedList<T>::findSmallestKey(){
    Node<T>* node_to_read = head;
    int smallest_key = -1;
    int node_key;

    if (!getSize()){
        std::cerr << "Cannot find the smallest key. The list is empty" << std::endl;
        return smallest_key;
    }

    while(node_to_read != nullptr){
        node_key = node_to_read->getKey();
        if (smallest_key == -1){
            smallest_key = node_key;
        }
        else{
            if (node_key < smallest_key){
                smallest_key = node_key;
            }
        }
        node_to_read = node_to_read->getPrevious();
    }
    return smallest_key;
}

template<typename T>
void OrderedList<T>::findNewHead(Node<T>* candidate){
    if (candidate->getNext() != nullptr){
        head = candidate->getNext();
    }
    else if(candidate->getPrevious() != nullptr){
        head = candidate->getPrevious();
    }
    else{
        // std::cout << "The list is empty" << std::endl;
        head = nullptr;
    }
}

template<typename T>
Node<T>* OrderedList<T>::removeAny(int given_key){
    Node<T>* node_to_read = head;
    bool isFound = false;
    bool isHead = false;

    while(node_to_read != nullptr){
        if(node_to_read->getKey() == given_key){
            isFound = true;
            if (node_to_read == head){
                isHead = true;
            }
            break;
        }
        node_to_read = node_to_read->getPrevious();
    }

    if(!isFound) throw std::invalid_argument("Could not find a node with given key");
    if(isHead) findNewHead(node_to_read);

    if (node_to_read->getNext() != nullptr) node_to_read->getNext()->setPrevious(node_to_read->getPrevious());
    if (node_to_read->getPrevious() != nullptr) node_to_read->getPrevious()->setNext(node_to_read->getNext());
    
    node_to_read->setNext(nullptr);
    node_to_read->setPrevious(nullptr);

    setSize(getSize()-1);

    return node_to_read;
}

template<typename T>
Node<T>* OrderedList<T>::removeMin(){
    Node<T>* node_to_return;
    int smallest_key = findSmallestKey();

    node_to_return = removeAny(smallest_key);
    return node_to_return;
}

template<typename T>
void OrderedList<T>::addNode(int param_key, T* param_value){
    Node<T>* new_node = new Node<T>(head, nullptr, param_key, param_value);

    if(head == nullptr){
        head = new_node;
    }
    else{
        head->setNext(new_node);
        head = new_node;
    }
    setSize(getSize()+1);
}

template<typename T>
void OrderedList<T>::walkThrough(){
    int* keys = getKeys();
    std::string** values = getValues();

    for(int i=getSize()-1; i>=0; --i){
        std::cout << keys[i] << ". paczka -> " << *values[i] << std::endl;
    }

    std::cout << std::endl;
}

template class OrderedList<std::string>;
