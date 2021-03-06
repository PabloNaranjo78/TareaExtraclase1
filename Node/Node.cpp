//
// Created by pablo on 3/3/21.
//

#include "Node.h"


Node::Node(int _data) {
    data = _data;
    next = NULL;
}

void * Node::operator new(std::size_t size) {
    if (true){
        printf("Sobrecargando %d",size);
        void * ppp = malloc(size);
        return ppp;
    }
}

void Node::setData(int _data) {
    data = _data;
}

int  Node::getData() {
    printf(" %d hhhhh",data);
    return data;
}

void Node::operator delete(void * ppp) {
    free(ppp);
}
