#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front = -1, rear = -1;

void enqueue(int a)
{
    if ((rear + 1) % N == front)
    {
        cout << "Overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = a;
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = a;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Underflow" << endl;
    }
    else if (front == rear)
    {
        queue[front] = 0;
        front = rear = -1;
    }
    else
    {
        queue[front] = 0;
        front = (front + 1) % N;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "No data to display" << endl;
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            cout << queue[i] << " ";
            i = (i + 1) % N;
        }
        cout << queue[i] << endl;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "No data to display" << endl;
    }
    else
    {
        cout << queue[front] << endl;
    }
}

int main()
{
    int choice = 0;  // Initialize choice
    while (choice != 5)
    {
        cout << "1-Enqueue 2-Dequeue 3-Peek 4-Display 5-Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int x;
            cout << "Enter element: ";
            cin >> x;
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            break;  // Exit the loop
        default:
            cout << "Error: Invalid choice" << endl;
        }
    }

    return 0;
}
