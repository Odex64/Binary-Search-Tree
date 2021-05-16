#pragma once

class Node
{
public:
    Node(int data, Node* left, Node* right) : data(data), left(left), right(right) {};
    Node(int data) : data(data), left(nullptr), right(nullptr) {};

    void SetLeft(Node* left);
    void SetRight(Node* right);
    Node* GetLeft();
    Node* GetRight();
    int GetData();

private:
    int data;
    Node* left;
    Node* right;
};