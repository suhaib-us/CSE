// linked-list
#include<iostream>
using namespace std;

int main(){
   struct node{
    int a;
    node *next;
    // node(int value):a(value),next(nullptr){}
   };

    node *head; 
    head=0;

    node *newNode=new node;  //create an object of type node and create a pointer which points to the newly created object
   
    head=newNode;

    cin>>newNode->a;
    newNode->next=0;
    

    cout<<newNode->a<<endl;
    cout<<newNode->next<<endl;
     

 
}