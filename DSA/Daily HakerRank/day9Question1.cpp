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
    cout << "This is called" << endl;
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
    cout << temp->data << endl;
}

int primeCheck(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data == 2)
        {
            count++;
        }

        int k = 0;
        int half = (temp->data) / 2;
        for (int i = 2; i < (temp->data); i++)
        {
            if ((temp->data) % i == 0)
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            count++;
        }
        temp = temp->next;
    }
    return count;
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
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid Number" << endl;
        exit(EXIT_SUCCESS);
    }
    Node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        insertAtEnd(d, head);
    }
    print(head);

    int nPrime = primeCheck(head);
    cout << nPrime << endl;

    return 0;
}