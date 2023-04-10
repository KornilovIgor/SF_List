#pragma once

#include "Node.h"

class List
{
public:
    List() : _head(nullptr) {};
    void push_back(int data);
    void push_front(int data);
    void insert(int pos, int data);
    void show();
    void deleteNode(int data);
    void clear();

private:
    Node* _head;
};