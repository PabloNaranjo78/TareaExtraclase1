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
        void * ppp = collector->getPointer();
        cout<<"New Recycled:"<<ppp<<endl;
        return ppp;
    }else{
        void * ppp = malloc(size);
        cout<<"New:"<<ppp<<endl;
        return ppp;
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
