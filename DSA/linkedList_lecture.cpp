#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *start = NULL;

void insertAtBeg(int d)
{
    Node *newNode = new Node;
    newNode->data = d;
    newNode->next = start;
    start = newNode;
}

void print()
{
    Node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << ", ";
        ptr = ptr->next;
    }
}

void countNodes()
{
    Node *ptr = start;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    cout << "No. of nodes are: " << count;
}

void insertAtEnd(int d)
{
    Node *ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    Node *newNode = new Node;
    newNode->data = d;
    newNode->next = NULL;
    if (start == NULL)
    {
        start = newNode;
    }
    else
        ptr->next = newNode;
}

void linearSearch(int d)
{
    Node *ptr = start;
    while (ptr != NULL)
    {
        if (ptr->data == d)
        {
            cout << "Element found at ptr " << ptr;
            break;
        }
        else
            ptr = ptr + 1;
    }
}

int main()
{
    cout << "Enter how many data element you want to insert: ";
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        insertAtBeg(k);
    }
    print();
    return 0;
}