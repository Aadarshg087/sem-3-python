#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

// Circular Linked List
void insertNode(int d, Node *&tail)
{
    // empty list
    if (tail == NULL)
    {
        Node *node1 = new Node(d);
        node1->next = node1;
        tail = node1;
        return;
    }
    // non-empty list
    Node *node1 = new Node(d);
    node1->next = tail->next;
    tail->next = node1;
    tail = node1;
}

void insertMiddle(int d, int element, Node *&tail)
{
    // inserts the node after the given element
    Node *temp = tail;
    while (temp->data != element)
    {
        temp = temp->next;
    }

    Node *node1 = new Node(d);
    node1->next = temp->next;
    temp->next = node1;
    cout << "Node successfully inserted" << endl;
}

void deleteNode(int value, Node *&tail)
{
    Node *temp = tail;
    while (temp->data != value)
    {
        temp = temp->next;
    }
    // cout<<"temp data: "<<temp->data<<endl;
    temp->next = NULL;
    delete temp;
}

void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp->data != tail->data);

    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertNode(43, tail);
    print(tail);

    insertNode(54, tail);
    print(tail);

    insertNode(56, tail);
    print(tail);

    insertNode(87, tail);
    print(tail);

    insertMiddle(32, 54, tail);
    print(tail);

    insertMiddle(100, 56, tail);
    print(tail);

    insertMiddle(101, 87, tail);
    print(tail);

    cout << "Tail Data: " << tail->data << endl;

    deleteNode(101, tail);
    print(tail);

    return 0;
}