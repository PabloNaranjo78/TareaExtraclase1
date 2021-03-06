//
// Created by pablo on 3/3/21.
//

#include "Node.h"
#include <iostream>
using namespace std;
Node::Node(int _data) {
    data = _data;
    nextData = NULL;
}

void * Node::operator new(std::size_t size) {
    if (true){
        void * ppp = malloc(size);
        cout<<"New:"<<ppp<<endl;
        return ppp;
    }
}


int  Node::getData() {
 //   printf("Data= %d ",data);
    return data;
}


void Node::operator delete(void * ppp) {
    cout<<"Delete="<<ppp<<endl;
    free(ppp);
}
