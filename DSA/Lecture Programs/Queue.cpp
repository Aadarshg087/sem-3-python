#include <iostream>
#include <vector>
using namespace std;

// insertion in queue
void enQueue(int queue[], int &front, int &rear, int n, int item)
{
    if (front == 0 && rear == n - 1 || front == rear + 1)
    {
        cout << "Overflow";
        exit(EXIT_SUCCESS);
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

    queue[rear] = item;
}

// deletion in queue
void deQueue(int queue[], int &front, int &rear, int n)
{
    if (front == -1)
    {
        cout << "Underflow" << endl;
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
}

// printing the front and the rear elements of the queue
void print(int queue[], int &front, int &rear)
{
    cout << "Value of front and rear: " << endl;
    cout << front << " " << rear << endl;
    cout << "Element at the front and rear positions" << endl;
    cout << queue[front] << " " << queue[rear] << endl;
}

int main()
{
    int n = 5;
    int queue[n];
    int front = -1;
    int rear = -1;

    // inseting the element
    enQueue(queue, front, rear, n, 20);
    enQueue(queue, front, rear, n, 30);
    enQueue(queue, front, rear, n, 40);

    // print function
    print(queue, front, rear);

    // deletion and printing
    deQueue(queue, front, rear, n);
    print(queue, front, rear);

    return 0;
}