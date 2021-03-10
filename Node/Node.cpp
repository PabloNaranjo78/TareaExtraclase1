//
// Created by pablo on 3/3/21.
//

#include "Node.h"
#include <iostream>
using namespace std;


/***
 * Constructor de la clase nodo.
 * @param _data este parámentro es el dato de tipo entero a almacenar en el Nodo.
 */
Node::Node(int _data) {
    data = _data;
    nextData = NULL;
}

/***
 * Es el sobrecargo del operador new, el cual se ve rempazado por este con el fin de hacer un manejo manual de la memoria
 * usando a la clase Collector
 * @param size es el tamaño que se desea ocupar en caso de que se tenga que crear un nuevo espacio en memoria
 * @param collector este puntero aputa a una instancia de Collector, la cual se usa para hacer peticiones de memoria
 * si hubieran disponibles para reutilizar.
 * @return retorna un puntero, ya sea reutilizado o nuevo.
 */
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

/***
 * Método para obtener la información guardada en el nodo.
 * @return
 */
int  Node::getData() {
    return data;
}

/***
 * Sobrecargo del operador delete, para hacer que no se borre la memoria, si no que se guarde en collector.
 * @param pointer es el puntero que se desea guardar en el collector.
 */
void Node::operator delete(void * pointer) {
    cout<<"Saving= "<<pointer<<"--/> "<<(((Node*)pointer)->getData())<<endl;
    Collector* collector = ((Node*)pointer)->collector;
    collector->recyclePointer(pointer);
}
