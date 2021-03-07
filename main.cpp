#include <iostream>
#include "List/List.h"
#include "Node/Node.h"
using namespace std;

int main() {

    List lista1;
    lista1.addData(2);
    lista1.addData(9);
    lista1.addData(7);
    lista1.addData(77);
    lista1.addData(55);
    lista1.addData(54);
    lista1.addData(51);
    lista1.addData(52);

    lista1.printList();
    lista1.deleteLastData();
    lista1.deleteLastData();
    lista1.deleteLastData();
    lista1.deleteLastData();
    //lista1.printPointers();
    lista1.addData(8);
    lista1.addData(12);
    lista1.addData(33);
    lista1.addData(32);
    lista1.addData(90);




   lista1.printList();

    //lista1.printPointers();



    //lista1.printPointers();


    return 0;
}
