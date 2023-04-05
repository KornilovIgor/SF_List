#pragma once

class Node
{
public:
    explicit Node(int data) : _data(data), _next(nullptr){};

    int _data;
    Node *_next;
};