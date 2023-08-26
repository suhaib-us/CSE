// reverse a linked-list 
#include <iostream>
using namespace std;
struct node
    {
        int a;
        struct node *next;
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

        if (head == 0)
        {
            head = temp = newNode; // first node

        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        temp->next=0;

        cout<<"0-Quit 1-Cont";
        cin>>choice;

    
    }

    struct node *prevnode,*currentnode,*nextnode;
    prevnode=nullptr;
    currentnode=nextnode=head;

    while(nextnode !=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;

     


    

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

