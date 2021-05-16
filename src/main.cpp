#include "BST.hpp"
#include <iostream>

int main()
{
    BST tree(10);
    tree.Insert(1);
    tree.Insert(12);
    tree.Insert(32);
    tree.Insert(20);

    tree.OrderPrint();
    std::printf("\n%d", tree.count());

    printf("\n%s", tree.contains(5) ? "true" : "false");
    printf("\n%s", tree.contains(32) ? "true" : "false");

    printf("\n%d", tree.max());
    printf("\n%d", tree.min());

    return 0;
}