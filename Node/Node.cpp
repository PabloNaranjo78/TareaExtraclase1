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

void * Node::operator new(std::size_t size,Collector* collector) {
    if (collector->getCounter() >= 1){
        void * newPointer = collector->getPointer();
        cout<<"New Recycled:"<<newPointer<<endl;
        return newPointer;
    }else{
        void * newPointer = malloc(size);
        cout<<"New:"<<newPointer<<endl;
        return newPointer;
    }
}


int  Node::getData() {
    return data;
}


void Node::operator delete(void * ppp) {
    cout<<"Saving= "<<ppp<<"--/> "<<(((Node*)ppp)->getData())<<endl;
    Collector* collector = ((Node*)ppp)->collector;
    collector->recyclePointer(ppp);
}
