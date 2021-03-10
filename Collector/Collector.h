//
// Created by pablo on 3/3/21.
//

#ifndef TAREAEXTRACLASE1_COLLECTOR_H
#define TAREAEXTRACLASE1_COLLECTOR_H
#include "Collector.h"
#include <iostream>
#include <clocale>

/***
 * Esta clase se utiliza para crear una lista enlazada con los elementos que se han ido eliminando de la lista principal
 * esto con el fin de luego poder reutilizarlos.
 */
class Recyclebin{
public:
    void * pointer = NULL;
    Recyclebin * nextPointer = NULL;
};


/***
 * La clase Collector se encarga de llevar el control de la reutilización de memoria.
 */
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


