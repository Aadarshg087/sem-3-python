#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int element)
    {
        if (rear == size)
        {
            cout << "Queue si full" << endl;
            return;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }

    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    void qfront_rear()
    {
        cout << arr[front] << endl;
        cout << arr[rear - 1] << endl;
    }

    void qsize()
    {
        int count = 0;
        if (front == rear)
        {
            cout << count << endl;
        }
        else
        {

            for (int i = front; i <= rear; i++)
            {
                count++;
            }
            cout << count << endl;
        }
    }

    void empty()
    {
        if (front == rear)
        {
            cout << "The Queue is empty" << endl;
        }
        else
        {
            cout << "The Queue is not empty" << endl;
        }
    }
};

int main()
{
    Queue q1(5);
    q1.enqueue(32);
    q1.enqueue(43);
    q1.enqueue(87);
    q1.enqueue(54);

    cout << "Front and rear elements: " << endl;
    q1.qfront_rear();
 
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();

    q1.qsize();

    /*
        Queue using STL

        queue<int> q;
        q.push(34);
        q.push(43);
        q.push(78);
        q.push(90);
        q.push(54);

        cout << q.front() << endl;
        cout << q.size() << endl;

        q.pop();
        q.pop();
        q.pop();
        q.pop();
        q.pop();

        cout << q.empty() << endl;

        cout << q.front() << endl;
        cout << q.size() << endl;
        */
    return 0;
}