#include <iostream>
#include "List/List.h"
#include "Node/Node.h"
using namespace std;

/***
 * Función principal, esta hace un menú en la cual se pueden elegir diferentes opciones numéricas para hace uso de la lista.
 */
int main() {

    int info;
    bool menu = true;
    int data;
    List list;
    while(menu){
        cout<<"\nPress\n-->1: to insert new int\n-->2: to insert 'n' number of int \n"
              "-->3: to print the list\n-->4: delete last element \n-->5: exit"<<endl;
        cin>>info;

        switch (info) {
            case 1:
                cout<<"Insert int:\n->";
                cin>>data;
                list.addData(data);
                break;
            case 2:
                cout<<"How many elements?"<<endl;
                int elements;
                cin>>elements;
                for (int i = 0; elements>i;i++){
                    cout<<"->";
                    cin>>data;
                    list.addData(data);
                }
                break;
            case 3:
                list.printList();
                break;
            case 4:
                list.deleteLastData();
                break;
            case 5:
                menu = false;
        }
    };


    return 0;
}
