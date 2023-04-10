#include "SingleList.h"

#include <iostream>

void List::push_back(int data)
{
    Node* node = new Node(data);

    if (_head == nullptr)
    {
        _head = node;
        return;
    }

    Node* last = _head;
    while (last->_next != nullptr)
    {
        last = last->_next; 
    }
    last->_next = node;
    return;
}

void List::push_front(int data)
{
    Node* node = new Node(data);
    node->_next = _head;
    _head = node;
}

void List::insert(int pos, int data)
{
    Node* newNode = new Node(data);
    if (_head == nullptr)
    {
        _head = newNode;
        return;
    }

    if (pos == 0)
    {
        newNode->_next = _head;
        _head = newNode;
        return;
    }

    int currPos = 0;
    Node* current = _head;
    while (currPos < pos-1 && current->_next != nullptr)
    {
        current = current->_next;
        currPos++;
    }
    Node* next = current->_next;
    current->_next = newNode;
    newNode->_next = next;
}

void List::show()
{
    if (_head == nullptr)
    {
        return;
    }

    Node* current = _head;
    while(current != nullptr)
    {
        std::cout << current->_data;
        current = current->_next;
    }
}

void List::clear()
{
    if (_head == nullptr)
    {
        return;
    }

    if(_head)
    {
        Node* current = _head;
        Node* temp = nullptr;

        while(current != nullptr)
        {
            temp = current->_next;
            delete current;
            current = temp;
        }

        _head = nullptr;
    }
}