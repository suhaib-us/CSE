// Doubly linked-list insertion
#include <iostream>
using namespace std;
struct node
    {
        int a;
        struct node *next;
        struct node *prev;
    };


void insertBeg(node *&head){
    node *newNode = new node;
    cout<<"Enter data";
    cin>>newNode->a;
    head->prev=newNode;
    newNode->next=head;
    newNode->prev=nullptr;
    head=newNode;
}
void insertEnd(node *&tail){
    node *newNode = new node;
    cout<<"Enter data";
    cin>>newNode->a;
    tail->next=newNode;
    newNode->prev=tail;
    newNode->next=nullptr;
    tail=newNode;
}
void insertAnywhere(int pos,node *&head){
    node *temp;
    temp=head;
    node *newNode = new node;
    cout<<"Enter data";
    cin>>newNode->a;
    int i=1;
    while(i<pos-1){      //i<pos if it is to be inserted after position
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    temp->next=newNode;

    temp=newNode->next;  //newNode->next->prev=newNode
    temp->prev=newNode;
}



int main()
{
    node *head,*tail,*temp;
    head = 0;

    int choice;
    choice=1;
    while(choice){

        node *newNode = new node;

        cout<<"Enter data";
        cin>>newNode->a;
        newNode->next=nullptr;
        newNode->prev=nullptr;

        if (head == 0)
        {
            head=tail=newNode; // first node

        }
        else
        {
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
           
        }
      


        cout<<"0-Quit 1-Cont";
        cin>>choice;

    
    }

    // insertBeg(head);
    // insertEnd(tail);

    int pos;
    cout<<"Enter position";
    cin>>pos;
    insertAnywhere(pos,head);

     
    temp=head;
    int count=0;
    while(temp!=0){
        cout<<temp->a<<endl;
        temp=temp->next;
        count++;
    }

    cout<<"count is:"<<count;
    return 0;

    
}

