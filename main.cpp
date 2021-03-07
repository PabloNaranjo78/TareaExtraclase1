#include <iostream>
#include "List/List.h"
#include "Node/Node.h"
using namespace std;

int main() {

    List lista1;
    lista1.addData(2);
    lista1.addData(9);
    lista1.addData(7);
    lista1.addData(5);
    lista1.printList();
    lista1.deleteLastData();
    lista1.deleteLastData();
    lista1.deleteLastData();

    //lista1.printPointers();
    lista1.addData(8);
    lista1.addData(12);
    lista1.addData(22);
    lista1.addData(90);




   lista1.printList();

    //lista1.printPointers();



    //lista1.printPointers();


    int a;
    cin>>a;

    return 0;
}
