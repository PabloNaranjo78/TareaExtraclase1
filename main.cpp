#include <iostream>
#include "List/List.h"
#include "Node/Node.h"
using namespace std;

int main() {
 //   Node * node = new Node(2);
   // int a = (*node).getData();
//    printf("\n o %d ++ \n",a);
  //  cout<<&*node<<endl;
    //delete node;

    List lista1;
    lista1.addData(2);
    lista1.addData(9);
    lista1.addData(7);
    lista1.addData(5);
    lista1.printList();

    return 0;
}
