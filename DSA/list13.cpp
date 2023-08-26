// singly circular linked-list (tail) 
#include <iostream>
using namespace std;
struct node
    {
        int a;
        struct node *next;
    };

void insertBeg( node *&head){
   
}
int main()
{
    node  *tail;
    tail=nullptr;
    int choice;
    choice=1;
    while(choice){

        node *newNode = new node;

        cout<<"Enter data";
        cin>>newNode->a;

        if (tail == 0)
        {
            tail = newNode; // first node
            tail->next=newNode;

        }
        else
        {
            newNode->next=tail->next;
            tail->next = newNode; 
            tail = newNode;
        }

     

        cout<<"0-Quit 1-Cont";
        cin>>choice;

    
    }



    node *temp;
    temp=tail->next;
    int count;

    // while(temp->next!=tail->next){   //could be made better
    //     cout<<temp->a<<endl;    
    //     temp=temp->next;
    //     count++;
    // }
    // cout<<temp->a<<endl;
    // count++;

    // while(temp!=tail->next){        //loop will not execute
    //     cout<<temp->a<<endl;    
    //     temp=temp->next;
    //     count++;
    // }

    // do{                            //loop will terminate before printing the last element
    //     cout<<temp->a<<endl;    
    //     temp=temp->next;
    //     count++;
    // }
    // while(temp->next!=tail->next);
   
    do{
        cout<<temp->a<<endl;    
        temp=temp->next;
        count++;
    }
    while(temp!=tail->next);
  


    cout<<count;
    return 0;
}