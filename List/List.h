//
// Created by pablo on 3/3/21.
//

#ifndef TAREAEXTRACLASE1_LIST_H
#define TAREAEXTRACLASE1_LIST_H
#include <iostream>
#include "../Node/Node.h"

class List {
    private:
        Node* node = NULL;
        int counter = 0;
    public:
        List();
        void printList();
        void addData(int data);
        void deleteLastData();
};


#endif //TAREAEXTRACLASE1_LIST_H
