#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        next = NULL;
    }
};

void insertAtEnd(int d, Node *&head)
{
    Node *temp = head;
    Node *node1 = new Node(d);
    if (head == NULL)
    {
        head = node1;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node1;
}

int eligible(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data > 18)
        {
            count++;
        }
        temp = temp->next;
    }

    return count;
}

int main()
{
    Node *head = NULL;
    int n, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        insertAtEnd(d, head);
    }

    int value = eligible(head);

    cout << value << endl;

    return 0;
}