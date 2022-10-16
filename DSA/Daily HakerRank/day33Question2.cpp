#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Queue
{
public:
    int front;
    int rear;
    string *arr;
    int size;

    Queue(int size)
    {
        this->size = size;
        front = rear = 0;
        arr = new string[size];
    }

    void enqueue(string name)
    {
        if (rear == size)
        {
            cout << "No other spectator is allowed" << endl;
        }
        else
        {
            arr[rear] = name;
            rear++;
        }
    }

    void display()
    {
        if (front == rear)
        {
            return;
        }

        for (int i = 0; i < size; i++)
        {
            if (i == 1)
            {
                cout << arr[i] << endl;
            }
            else if (i % 2 != 0)
            {
                cout << arr[i] << endl;
            }
        }
    }
};

int main()
{
    Queue q(9);
    int t = 2;
    while (t-- > 0)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            int number_of_names;
            cin >> number_of_names;
            if (number_of_names > 9)
            {
                cout << "No other spectator is allowed" << endl;
                exit(EXIT_SUCCESS);
            }
            string name;
            for (int i = 0; i < number_of_names; i++)
            {
                cin >> name;
                q.enqueue(name);
            }
        }
        else if (num == 2)
        {
            q.display();
        }
    }
    return 0;
}
