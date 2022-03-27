#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>

#include "orderedList.h"


class Message{
private:
    std::string text_to_send;
public:
    Message() = default;
    Message(const std::string new_text);

    // Getters
    std::string getText() const;

    // Setters
    void setText(std::string new_text);

    int findBestDivisor(int num);
    OrderedList<std::string>* sendMessage(int packages_num);
    OrderedList<std::string>* shuffle(OrderedList<std::string>* list_to_shuffle);
    OrderedList<std::string>* receive(OrderedList<std::string>* list_to_unshuffle);

};

#endif // MESSAGE_H
