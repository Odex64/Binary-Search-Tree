#pragma once
#include "Node.hpp"

class BST
{
public:
    BST(int data) : root(new Node(data)) {};
    void Insert(int data);
    int count();
    bool contains(int data);
    int max();
    int min();
    void OrderPrint();
    void PostOrderPrint();
    void PreOrderPrint();

private:
    Node* root;
    Node* Insert(Node* current, int data);
    int count(int num, Node node);
    bool contains(int data, Node current);
    int max(int num, Node current);
    int min(int num, Node current);
    void OrderPrint(Node* current);
    void PostOrderPrint(Node* current);
    void PreOrderPrint(Node* current);
};