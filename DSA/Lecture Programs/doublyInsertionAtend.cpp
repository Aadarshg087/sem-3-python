#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *pre, *next;
};

void insertAtEnd(int d)
{
    newNode->data = d;
    newNode->next = NULL;
    if (start == NULL)
    {
        start = newNode;
        newNode->pre = NULL;
    }
    else
    {
        Node *ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->pre = ptr;
    }
}

int main()
{

    return 0;
}