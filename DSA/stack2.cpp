// stack using linked-list
#include<iostream>
using namespace std;
struct node{
    int a;
    struct node *link;
};
node *top=nullptr;

void push(int x){
    node *newnode=new node;
    newnode->a=x;
    newnode->link=top;
    top=newnode;
}
void display(){
    node *temp;
    temp=top;
    if(temp==0){
        cout<<"empty list";
    }
    else{
    while(temp!=0){
        cout<<temp->a;
        temp=temp->link;
    }
    }
}
void peek(){
    if(top==0){
        cout<<"empty list";
    }
    else{
    cout<<top->a;
    }
}
void pop(){
    node *temp;
    temp=top;
    if(top==0){
        cout<<"empty list";
    }
    else{
    top=top->link;
    cout<<"popped element is "<<temp->a;
    delete temp;
    }
}

int main(){
    int choice;
    cout << "1-Push 2-Pop 3-Peek 4-Display 5-Exit" << endl;
    while (choice != 5)
    {
        cout << "Enter your choice:"<< endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int x;
            cout<<"enter element";
            cin>>x;
            push(x);
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