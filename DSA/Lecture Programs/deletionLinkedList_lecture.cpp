#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *start = NULL;

void deleteFirst()
{
    if (start == NULL)
    {
        cout << "Sorry nothing available to delete";
        return;
    }
    else
    {
        Node *ptr = start;
        start = start->next;
        delete (ptr);
    }
}
int main()
{

    return 0;
}