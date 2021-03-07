//
// Created by pablo on 3/3/21.
//

#include "Collector.h"
#include <iostream>
using namespace std;

void *Collector::getPointer() {
    counter-=1;
    Recyclebin* temp = recyclebin;
    void* ppp = temp->pointer;
    if(recyclebin->nextPointer == NULL){
        cout<<"Es nulo el puntero"<<endl;
        return ppp;
    }
    recyclebin = recyclebin->nextPointer;
    return ppp;
}

void Collector::recyclePointer(void * _pointer) {
    if (counter == 0){
        counter+=1;
        recyclebin->pointer = _pointer;
    }else{
        counter+=1;
     //   cout<<recyclebin->pointer<<"------"<<_pointer<<endl;
        Recyclebin* temp = new Recyclebin;
        temp->pointer = recyclebin->pointer;
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
