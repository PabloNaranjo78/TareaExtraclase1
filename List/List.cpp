//
// Created by pablo on 3/3/21.
//

#include "List.h"
#include "../Node/Node.h"
#include <iostream>
using namespace std;

List::List() {
}

void List::printList() {
    Node* pointer = node;
    cout<<"Elements: "<<counter<<endl;
    for (int i = counter;i>=0;i--){
        cout<<pointer<<" ->> "<< "Data:"<<(*pointer).getData()<<" -> "<<endl;
        pointer = (*pointer).nextData;
    }
}


void List::addData(int data) {
  counter+=1;
  if (node == NULL){
      node = new Node(data);
    }
  else{
        Node* temp = node;
        node = new Node(data);
        (*node).nextData = temp;
    }
}

