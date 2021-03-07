//
// Created by pablo on 3/3/21.
//

#ifndef TAREAEXTRACLASE1_COLLECTOR_H
#define TAREAEXTRACLASE1_COLLECTOR_H

#include <clocale>

class Recyclebin{
public:
    void * pointer = NULL;
    Recyclebin * nextPointer = NULL;
};

class Collector {
private:
    Recyclebin* recyclebin = new Recyclebin();
public:
    Collector();
    int counter = 0;
    void* getPointer();
    void recyclePointer(void*);
    void printCollectorPointers();
    int getCounter();
};


#endif //TAREAEXTRACLASE1_COLLECTOR_H
