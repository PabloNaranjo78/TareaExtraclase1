//
// Created by pablo on 3/3/21.
//

#include "Collector.h"
#include <iostream>
using namespace std;

void *Collector::getPointer() {
    Recyclebin* temp = recyclebin;
    void* ppp = temp->pointer;
    cout<<counter<<"Esdddd"<<endl;
    recyclebin = recyclebin->nextPointer;
    counter-=1;
    return ppp;
}

void Collector::recyclePointer(void * _pointer) {
    if (counter == 0){
        counter+=1;
        recyclebin->pointer = _pointer;
    }else{
        counter+=1;
        Recyclebin* temp = new Recyclebin();
        temp->pointer = recyclebin->pointer;
        temp->nextPointer = recyclebin->nextPointer;
        recyclebin->pointer = _pointer;
        recyclebin->nextPointer = temp;
    }
}


void Collector::printCollectorPointers() {
    Recyclebin* temp = recyclebin;
    void* pointer = (*recyclebin).pointer;
    cout<<"Pointers:"<<counter<<endl;
    for (int i = counter;i>0;i--){
        cout<<"->"<<pointer<<endl;
        temp = (*temp).nextPointer;
    }

}

Collector::Collector() {
}

int Collector::getCounter() {
    return counter;
}
