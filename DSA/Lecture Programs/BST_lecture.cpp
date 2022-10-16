#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        left = NULL;
        right = NULL;
    }
};
Node *root = NULL, *loc = NULL, *par = NULL;

void find(int item)
{
    Node *ptr = NULL, *parptr = NULL;
    if (root == NULL)
    {
        loc = NULL;
        par = NULL;
        return;
    }
    if (root->data == item)
    {
        loc = root;
        par = NULL;
        return;
    }
    if (root->data > item)
    {
        // Not Sure
        // ptr = root->left;
    }
    else
    {
        ptr = root->right;
        parptr = root;
    }
    while (ptr != NULL)
    {
        if (ptr->data == item)
        {
            loc = ptr;
            par = parptr;
            return;
        }
        if (ptr->data > item)
        {
            parptr = ptr;
            ptr = ptr->left;
        }
        else
        {
            parptr = ptr;
            ptr = ptr->right;
        }
    };
    loc = NULL;
    par = parptr;
}

void insert(int item)
{
    find(item);
    if (loc != NULL)
    {
        cout << item << "already exist!" << endl;
        return;
    }

    Node *newNode = new Node(item);
    // newNode->left = NULL;
    // newNode->right = NULL;
    //  Constructer did this part

    if (par != NULL)
    {
        if (par->data > item)
        {
            par->left = newNode;
        }
        else
        {
            par->right = newNode;
        }
    }
    else
    {
        root = newNode;
    }
}

void preorder(Node *R)
{
    if (R != NULL)
    {
        cout << R->data << endl;
        preorder(R->left);
        preorder(R->right);
    }
}

int main()
{

    insert(32);
    insert(40);
    insert(10);
    insert(47);
    insert(30);
    insert(76);
    preorder(root);

    return 0;
}