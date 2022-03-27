#ifndef NODE_H
#define NODE_H


template<typename T>
class Node{
private:
    Node<T>* previous;
    Node<T>* next;
    int key;
    T* value;
public:
    Node(Node<T>* param_previous, Node<T>* param_next, int param_key, T* param_value);

    // Getters
    Node<T>* getPrevious() const;
    Node<T>* getNext() const;
    int getKey() const;
    T* getValue() const;

    // Setters
    void setNext(Node<T>* new_next);
    void setPrevious(Node<T>* new_previous);
    void setValue(T* new_value);
    
    void display();
};

#endif // NODE_H
