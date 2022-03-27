#include <iostream>
#include "node.h"


template<typename T>
Node<T>::Node(Node<T>* param_previous, Node<T>* param_next, int param_key, T* param_value):
        previous(param_previous), next(param_next), key(param_key), value(param_value) {};

template<typename T>
void Node<T>::display(){
        std::cout << *value << " with key of: " << key << std::endl;
}

template<typename T>
int Node<T>::getKey() const{
        return key;
}

template<typename T>
T* Node<T>::getValue() const{
        return value;
}

template<typename T>
Node<T>* Node<T>::getPrevious() const{
        return previous;
}

template<typename T>
Node<T>* Node<T>::getNext() const{
        return next;
}

template<typename T>
void Node<T>::setValue(T* new_value){
        value = new_value;
}

template<typename T>
void Node<T>::setNext(Node<T>* new_next){
        next = new_next;
}

template<typename T>
void Node<T>::setPrevious(Node<T>* new_previous){
        previous = new_previous;
}

template class Node<std::string>;
