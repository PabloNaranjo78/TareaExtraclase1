//
// Created by pablo on 3/3/21.
//

#ifndef TAREAEXTRACLASE1_NODE_H
#define TAREAEXTRACLASE1_NODE_H


#include <iostream>

class Node {
public:
    int data;
    Node* nextData = NULL;
    Node(int _data);
    void* operator new (std::size_t);
    void operator delete(void*);
    int getData();
    void setData(int);

};


#endif //TAREAEXTRACLASE1_NODE_H
