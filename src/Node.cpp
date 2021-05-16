#include "Node.hpp"

void Node::SetLeft(Node* left)
{
    this->left = left;
}

void Node::SetRight(Node* right)
{
    this->right = right;
}

Node* Node::GetLeft()
{
    return left;
}

Node* Node::GetRight()
{
    return right;
}

int Node::GetData()
{
    return data;
}
