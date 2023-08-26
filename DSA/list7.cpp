// Doubly linked-list 
#include <iostream>
using namespace std;
struct node
    {
        int a;
        struct node *next;
        struct node *prev;
    };


int main()
{
    

    node *head, *temp;
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
            head = temp=newNode; // first node

        }
        else
        {
            temp->next=newNode;
            newNode->prev=temp;
            temp=newNode;
           
        }

        temp->next=0;

        cout<<"0-Quit 1-Cont";
        cin>>choice;

    
    }



     
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

