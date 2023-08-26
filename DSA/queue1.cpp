// queue using arrays
#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front, rear = -1;

void enqueue(int a)
{
    if (rear == N - 1)
    {
        cout << "Overflow"<<endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = a;
    }
    else
    {
        rear++;
        queue[rear] = a;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Underflow"<<endl;
    }
    else if(front==rear){
        queue[front]=0;
        front=rear=-1;
    }
    else{
        queue[front]=0;
        front++;
    }
}
void display(){
    if (front == -1 && rear == -1)
    {
        cout << "No data to display"<<endl;
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<queue[i];
        }
    }
}
void peek(){
    if (front == -1 && rear == -1)
    {
        cout << "No data to display"<<endl;
    }
    else{
    cout<<queue[front]<<endl;
    }
}
int main()
{
    int choice;
    while (choice != 5)
    {
        cout << "1-Enqueue 2-Dequeue 3-Peek 4-Display 5-Exit" << endl;
        cout << "Enter your choice:"<< endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int x;
            cout<<"enter element";
            cin>>x;
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
            choice = 5;
            break;
        default:
            cout << "Error"<< endl;
        }
    }
}
