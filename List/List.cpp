//
// Created by pablo on 3/3/21.
//

#include "List.h"
#include "../Node/Node.h"
#include <iostream>
using namespace std;

/***
 * Constructor de la clase List
 */
List::List() {
}

/***
 * Se utiliza para imprimir los elementos y punteros de la lista enlazada.
 */
void List::printList() {
    Node* pointer = node;
    cout<<"\nElements: "<<counter<<endl;
    for (int i = counter;i>0;i--){
        cout<<pointer<<" ->> "<< "Data:"<<(*pointer).getData()<<" -> "<<endl;
        pointer = (*pointer).nextData;
    }
    cout<<"\n";
}

/***
 * Con esta se puede agregar elementos nuevos a la lista, hace llamar al new de Collector para hacer el reutilizado de memoria
 * @param data el dato de tipo entero que se desea agregar a la lista enlazada.
 */
void List::addData(int data) {
  counter+=1;
  if (node == NULL){
      node = new(collector) Node(data);
    }
  else{
        Node* temp = node;
        node = new(collector) Node(data);
        (*node).nextData = temp;
    }
}

/***
 * Elimina el último elemento agregado a la lista enlazada.
 */
void List::deleteLastData() {
    if (node!= NULL){
        counter-=1;
        Node* temp = (*node).nextData;
        node->collector= collector;
        delete node;
        node = temp;
    }
}

/***
 * LLama a la función de imprimir los punteros del collector.
 */
void List::printPointers() {
    collector->printCollectorPointers();
}

