//
// Created by pablo on 3/3/21.
//

#ifndef TAREAEXTRACLASE1_NODE_H
#define TAREAEXTRACLASE1_NODE_H


#include <iostream>
#include "../Collector/Collector.h"

/***
 * Clase Node, que se encarga de guardar la información de la lista, contiene los métodos new y delete sobrecargados,
 * así como una instancia de collector para que pueda ser utilizado dentro de estos dos métodos.
 */
class Node {
public:
    Collector* collector;
    int data = 0;
    Node* nextData = NULL;
    Node(int _data);
    void* operator new (std::size_t size,Collector* collector);
    void operator delete(void*);
    int getData();
};


#endif //TAREAEXTRACLASE1_NODE_H
