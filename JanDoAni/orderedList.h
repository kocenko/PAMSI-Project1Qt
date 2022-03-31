#ifndef ORDERED_LIST_H
#define ORDERED_LIST_H

#include "node.h"


template<typename T>
class OrderedList{
private:
    Node<T>* head;
    int size;
public:
    OrderedList();
    ~OrderedList();

    // Getter
    int* getKeys() const;
    T** getValues() const;
    int getSize() const;

    // Setter
    void setSize(int new_value);

    int findSmallestKey();
    Node<T>* removeAny(int given_key);
    Node<T>* removeMin();
    void findNewHead(Node<T>* candidate);
    void addNode(int param_key, T* param_value);
    void walkThrough();
};

#endif // ORDERED_LIST_H
