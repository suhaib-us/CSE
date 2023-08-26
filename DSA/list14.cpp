// singly circular linked-list (tail) insertion
#include <iostream>
using namespace std;
struct node
    {
        int a;
        struct node *next;
    };

void insertBeg( node *&tail){
    node *newNode= new node;
    cout<<"Enter data";
    cin>>newNode->a;
    if(tail==0){
        tail=newNode;
        tail->next=newNode;
    }
    else{
        newNode->next=tail->next;
        tail->next=newNode;
    }
}
void insertEnd( node *&tail){
    node *newNode= new node;
    cout<<"Enter data";
    cin>>newNode->a;

    if(tail==0){
        tail=newNode;
        tail->next=newNode;
    }
    else{
        newNode->next=tail->next;
        tail->next=newNode;
        tail=newNode;
    }
}

void insertAnywhere( node *&tail,int pos){
    node *newNode= new node;
    node *temp;
    int i=1;
    cout<<"Enter data";
    cin>>newNode->a;
    temp=tail->next;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
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

    // insertBeg(tail);
    // insertEnd(tail);

    int pos;
    cout<<"Enter position";
    cin>>pos;
    insertAnywhere(tail,pos);



    node *temp;
    temp=tail->next;
    int count=0;
   
    do{
        cout<<temp->a<<endl;    
        temp=temp->next;
        count++;
    }
    while(temp!=tail->next);
  


    cout<<count;
    return 0;
}