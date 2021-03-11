//
// Created by pablo on 3/3/21.
//

#include "Collector.h"
#include <iostream>
using namespace std;

/***
 * Esta función se encarga de retornar un puntero que se tenga guardado en el collector.
 * @return un puntero para ser asignado a un nodo.
 */
void *Collector::getPointer() {
    Recyclebin* temp = recyclebin;
    void* pointer = temp->pointer;
    recyclebin = recyclebin->nextPointer;
    counter-=1;
    return pointer;
}
/***
 * Se encarga de reciclar los punteros que se eliminaron de la lista.
 * @param _pointer es el puntero que se desea guardar en la lista enlazada de Recyclebin
 */
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

/***
 * Constructor de collector
 */
Collector::Collector() {
}

/***
 * Se utiliza para obtener la cantidad de elementos que hay en el colector, esto se lleva registro en la variable counter.
 * @return retorna la variable counter que tiene la cantidad de elementos que hay en la lista del collector.
 */
int Collector::getCounter() {
    return counter;
}

/***
 * Imprime los punteros que se encuentran guardados en el Collector
 */
void Collector::printCollectorPointers() {
    Recyclebin* temp = recyclebin;
    cout<<"\nPointers:"<<counter<<endl;
    for (int i = counter;i>0;i--){
        cout<<"-0->"<<temp->pointer<<endl;
        temp = temp->nextPointer;
    }
    cout<<"\n";
}
