// queue using linked-list
#include <iostream>
using namespace std;
struct node
{
    int a;
    struct node *link;
};
node *front = nullptr;
node *rear = nullptr;
void enqueue(int x)
{
    node *newNode = new node;
    newNode->a = x;
    newNode->link = nullptr;

    if (front == nullptr && rear == nullptr)
    {
        front=rear=newNode;
    }
    else{
        rear->link=newNode;
        rear=newNode;
    }

}
void dequeue()
{
    node *temp;
    temp=front;
    if (front == nullptr && rear == nullptr)
    {
        cout<<"Empty"<<endl;
    }
    else{
    front=front->link;
    delete temp;
    }
}
void display()
{
    node *temp;
    temp=front;
    if (front == nullptr && rear == nullptr)
    {
        cout<<"Empty"<<endl;
    }
    else{
        while(temp!=0){
            cout<<temp->a<<endl;
            temp=temp->link;
        }
    }


}
void peek()
{
    if (front == nullptr && rear == nullptr)
    {
        cout<<"Empty"<<endl;
    }
    else{
        cout<<front->a<<endl;
    }

}

int main()
{
    int choice;
    while (choice != 5)
    {
        cout << "1-Enqueue 2-Dequeue 3-Peek 4-Display 5-Exit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int x;
            cout << "enter element";
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
            choice = 5;
            break;
        default:
            cout << "Error" << endl;
        }
    }
}