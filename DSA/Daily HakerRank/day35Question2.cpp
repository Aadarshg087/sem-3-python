#include <iostream>
#include <vector>
using namespace std;

void enqueue(int arr[], int n, int &front, int &rear, int element)
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        cout << "Queue is full" << endl;
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == n - 1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
    }
    arr[rear] = element;

    // cout << "rear: " << rear << endl;
}

int dequeue(int arr[], int n, int &front, int &rear)
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == n - 1)
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
    }
    return arr[front - 1];
}

void display(int arr[], int n, int &front, int &rear)
{
    if (rear < front)
    {
        for (int i = front; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int front = -1;
    int rear = -1;

    int n;
    cin >> n;
    int operation;
    cin >> operation;
    int arr[n];
    int op[operation];

    // No of elements in the queue
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    front = 0;
    rear = n - 1;

    // Operation Commands
    // 1->delete and insert
    // 0->delete only
    for (int i = 0; i < operation; i++)
    {
        cin >> op[i];
    }

    for (int i = 0; i < operation; i++)
    {
        if (op[i] == 1)
        {
            int element = dequeue(arr, n, front, rear);
            enqueue(arr, n, front, rear, element);
        }
        else
        {
            int element = dequeue(arr, n, front, rear);
        }
    }

    display(arr, n, front, rear);

    return 0;
}