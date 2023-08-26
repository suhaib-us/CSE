// stack using arrays
#include <iostream>
using namespace std;

#define N 5
int stack[N];
int top = -1;

void push()
{
    int x;
    cout << "Enter value"<< endl;
    cin >> x;
    if (top == N - 1)
    {
        cout << "overflow condition"<< endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        cout << "underflow condition"<< endl;
    }
    else
    {
        item = stack[top];
        top--;
        cout << item <<" "<< "was deleted from stack"<<endl;
    }
}
void peek()
{
    if (top == -1)
    {
        cout << "empty stack"<< endl;
    }
    else
    {
        cout << stack[top]<< endl;
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i]<< endl;
    }
}
int main()
{

    int choice;
    cout << "1-Push 2-Pop 3-Peek 4-Display 5-Exit" << endl;
    while (choice != 5)
    {
        cout << "Enter your choice:"<< endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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