#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;

void insertAtEnd(int d)
{
    Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    Node *newNode = new Node;
    newNode->data = d;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
        ptr->next = newNode;
}

void printList()
{
    Node *ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    int n = 6;
    int d;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        insertAtEnd(d);
    }
    printList();

    return 0;
}
