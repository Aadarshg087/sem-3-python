#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next->NULL;
    }
};
Node *head = NULL;
Node *tail = NULL;

void insertAtEnd(int d)
{
    // cout << "I am in insert function" << endl;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *freshNode = new Node();
    freshNode->data = d;
    freshNode->next = NULL;
    if (head == NULL)
    {
        head = freshNode;
    }
    else
        temp->next = freshNode;
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "this";
}

int main()
{
    int n, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        insertAtEnd(d);
    }
    print();

    return 0;
}
