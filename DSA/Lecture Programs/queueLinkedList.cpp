#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void insertionLL(int item)
{
    Node *newNode = new Node;
    newNode->data = item;
    newNode->next = NULL;
    Node *front = NULL;
    Node *rear;
    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void deletionInQueue()
{
    Node *front;
    Node *rear;
    Node *ptr;
    if (front == -1)
    {
        cout << "Undeflow";
    }
    else
    {
        if (front == rear)
        {
            Node *ptr = front;
            front = NULL;
            rear = NULL;
        }
        else
        {
            Node *ptr = front;
            front = front->next;
        }
    }
    delete ptr;
}

int main()
{

    insertionLL(20);
    insertionLL(30);
    cout << front->data;
    deletionInQueue();
    cout << front->data;

    return 0;
}