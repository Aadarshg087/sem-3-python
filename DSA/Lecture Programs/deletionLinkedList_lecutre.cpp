#include <iostream>
using namespace std;

// deleting the node at the last position
void deleteList()
{
    if (start == NULL)
    {
        cout << "Underflow";
    }
    else
    {
        Node *p1, *p2;
        p1 = start;
        p2 = start;
    }
    while (p1->next != NULL)
    {
        p2 = p1;
        p1 = p1->next;
    }
    p2->next = NULL;
    delete (p1);
}

int main()
{

    return 0;
}