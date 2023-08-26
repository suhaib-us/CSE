#include<iostream>
using namespace std;
#define N 5
int S1[N],S2[N];
int top1=-1,top2=-1;
int count=0;
void push1(int data){
        top1++;
        S1[top1]=data;
}
void push2(int data){
        top2++;
        S2[top2]=data;
}
int pop1(){
    return S1[top1--];
  
}
int pop2(){
    return S2[top2--];
    
}
void enqueue(int x){
    if(top1==N-1){
        cout<<"Overflow";
    }
    else{
    push1(x);
    count++;
    }
}
void dequeue(){
    int a;
    if(top1==-1&&top2==-1){
        cout<<"Empty";
    }
    else{
        for(int i=0;i<count;i++){
            a=pop1();
            push2(a);
        }
        pop2();
        count--;
        for(int i=0;i<count;i++){
            a=pop2();
            push1(a);
        }
    }
}
void display(){
    for(int i=0;i<count;i++){
        cout<<S1[i]<<" ";
    }
}
void peek()
{
    if (top1 == -1)
    {
        cout << "empty stack"<< endl;
    }
    else
    {
        cout << S1[top1]<< endl;
    }
}
int main(){
 int choice,x;
   
    while (choice != 5)
    {
        cout << "1-Enqueue 2-Dequeue 3-Peek 4-Display 5-Exit" << endl;
        cout << "Enter your choice:"<< endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter value";
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
            break;
        default:
            cout << "Error"<< endl;
        }
    }
}