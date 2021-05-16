#include "BST.hpp"
#include <iostream>

void BST::Insert(int data)
{
    root = Insert(root, data);
}

Node* BST::Insert(Node* current, int data)
{
    if (current == nullptr)
    {
        current = new Node(data);
    }
    else if (current->GetData() > data)
    {
        current->SetLeft(Insert(current->GetLeft(), data));
    }
    else if (current->GetData() < data)
    {
        current->SetRight(Insert(current->GetRight(), data));
    }
    return current;
}

int BST::count()
{
    return count(1, *root);
}

int BST::count(int num, Node node)
{
    int temp = num;
    if (node.GetLeft() != NULL)
        temp = count(temp + 1, *node.GetLeft());
    if (node.GetRight() != NULL)
        temp = count(temp + 1, *node.GetRight());
    return temp;
}

bool BST::contains(int data)
{
    return contains(data, *root);
}

bool BST::contains(int data, Node current)
{
    bool result = false;

    if (data == current.GetData())
        return true;
    else if (current.GetLeft() != NULL && data < current.GetData())
        result = contains(data, *current.GetLeft());
    else if (current.GetRight() != NULL && data > current.GetData())
        result = contains(data, *current.GetRight());
    return result;
}

int BST::max()
{
    return max(root->GetData(), *root);
}

int BST::max(int num, Node current)
{
    int temp = num;
    if (current.GetRight() != NULL)
        temp = max(current.GetRight()->GetData(), *current.GetRight());
    return temp;
}

int BST::min()
{
    return min(root->GetData(), *root);
}

int BST::min(int num, Node current)
{
    int temp = num;
    if (current.GetLeft() != NULL)
        temp = min(current.GetLeft()->GetData(), *current.GetLeft());
    return temp;
}

void BST::OrderPrint()
{
    OrderPrint(root);
}

void BST::OrderPrint(Node* current)
{
    if (current != nullptr)
    {
        OrderPrint(current->GetLeft());
        printf("%d : ", current->GetData());
        OrderPrint(current->GetRight());
    }
}

void BST::PostOrderPrint()
{
    PostOrderPrint(root);
}

void BST::PostOrderPrint(Node* current)
{
    if (current != nullptr)
    {
        OrderPrint(current->GetLeft());
        OrderPrint(current->GetRight());
        printf("%d : ", current->GetData());
    }
}

void BST::PreOrderPrint()
{
    PreOrderPrint(root);
}

void BST::PreOrderPrint(Node* current)
{
    if (current != nullptr)
    {
        printf("%d : ", current->GetData());
        OrderPrint(current->GetLeft());
        OrderPrint(current->GetRight());
    }
}