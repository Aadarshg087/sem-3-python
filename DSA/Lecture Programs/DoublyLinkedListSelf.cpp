#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtBeginning(int d, Node *&head)
{
    Node *temp = head;
    Node *node1 = new Node(d);
    if (head == NULL)
    {
        head = node1;
        return;
    }
    node1->next = head;
    head->prev = node1;
    head = node1;
}

void insertAtEnd(int d, Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *node1 = new Node(d);
    temp->next = node1;
    node1->prev = temp;
}
void traversingBackwards(Node *&head)
{
    Node *temp = head;
    cout << "Traversing Backwards" << endl;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    cout << "Temp data: " << temp->data << endl;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    insertAtBeginning(64, head);
    print(head);

    insertAtBeginning(5, head);
    print(head);

    insertAtBeginning(43, head);
    print(head);

    insertAtEnd(55, head);
    print(head);

    traversingBackwards(head);

    return 0;
}