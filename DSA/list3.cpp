// singly linked-list
#include <iostream>
using namespace std;

int main()
{
    struct node
    {
        int a;
        struct node *next;
    };

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

    temp=head;
    int count;
    while(temp!=0){
        cout<<temp->a<<endl;
        temp=temp->next;
        count++;
    }

    cout<<count;


    return 0;
}