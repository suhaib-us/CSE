// singly circular linked-list (head and temp) insertion
#include <iostream>
using namespace std;
struct node
    {
        int a;
        struct node *next;
    };

void insertBeg( node *&head){
    node *newNode =new node;
    node *temp;
    cout<<"Enter data";
    cin>>newNode->a;
    newNode->next=head;
    temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    head=newNode;
}
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

        temp->next=head;

        cout<<"0-Quit 1-Cont";
        cin>>choice;

    
    }

    insertBeg(head);

    temp=head;
    int count;
    while(temp->next!=head){
        cout<<temp->a<<endl;    
        temp=temp->next;
        count++;
    }
    cout<<temp->a<<endl;
    count++;
    cout<<count;
    return 0;
}