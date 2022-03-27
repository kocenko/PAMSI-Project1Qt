#ifndef ORDERED_LIST_H
#define ORDERED_LIST_H

#include "node.h"


template<typename T>
class OrderedList{
private:
    Node<T>* head;
public:
    OrderedList();

    // Getter
    int* getKeys() const;

    int size() const;
    int findSmallestKey();
    Node<T>* removeAny(int given_key);
    Node<T>* removeMin();
    void findNewHead(Node<T>* candidate);
    void addNode(int param_key, T* param_value);
    void walkThrough();
};

#endif // ORDERED_LIST_H
