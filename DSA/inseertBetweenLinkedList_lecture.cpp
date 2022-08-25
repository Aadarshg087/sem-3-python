#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *start = NULL;

void insesrtAfter(int d, int item)
{
    Node *K21ST = new Node;
    K21ST->data = item;
    Node *ptr = start;
    while (ptr->data != d)
    {
        ptr = ptr->next;
    }
    K21ST->next = ptr->next;
    ptr->next = K21ST;
}

int main()
{

    return 0;
}