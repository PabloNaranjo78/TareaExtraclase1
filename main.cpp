#include <iostream>
#include "List/List.h"
#include "Node/Node.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Node * node = new Node(2);
    int a = (*node).getData();
    printf("\n o %d ++ \n",a);
    printf("%d",&node);
    delete node;

    return 0;
}
