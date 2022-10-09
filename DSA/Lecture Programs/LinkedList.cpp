#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

// Insertion at the beginning
void insertAtBeginning(int d, Node *&head)
{
    Node *node1 = new Node(d);
    node1->next = head;
    head = node1;
}

void insertAtEnd(int d, Node *&head);

void insertAtMiddle(int d, int position, Node *&head)
{
    // Insertion is at the beginning
    if (position == 1)
    {
        insertAtBeginning(d, head);
        return;
    }

    // Traversing to the position
    Node *temp = head;
    int count = 1;
    while (count < position)
    {
        temp = temp->next;
        count++;
    }

    // Checking if the insertion is at the end or not
    if (temp->next == NULL)
    {
        insertAtEnd(d, head);
        return;
    }

    // Inserting the node in the middle
    Node *node1 = new Node(d);
    node1->next = temp->next;
    temp->next = node1;
}

// Insertion of the node at the end
void insertAtEnd(int d, Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *node1 = new Node(d);
    temp->next = node1;
}

// Deletion of the node using the position
void deletionByPosition(int position, Node *&head)
{
    if (position == 1)
    {
        head = head->next;
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position)
    {
        temp = temp->next;
        count++;
    }
}

// Deleting the node using the value
void deletionByValue(int d, Node *&head)
{
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;
    insertAtBeginning(32, head);
    insertAtBeginning(43, head);
    insertAtBeginning(65, head);

    insertAtEnd(11, head);
    insertAtEnd(12, head);
    insertAtEnd(114, head);

    print(head);
    cout << endl;

    insertAtMiddle(55, 4, head);

    print(head);
}