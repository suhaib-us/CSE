// linked-list deletion
#include <iostream>
using namespace std;
struct node
    {
        int a;
        struct node *next;
    };

void deleteFirstNode(node *&head)
{
    if (head == nullptr)
    {
        cout << "Linked list is empty. No node to delete.\n";
        return;
    }

    node *temp = head;
    head = head->next;
    delete temp;
    cout << "First node deleted.\n";
}
void deleteLastNode(node *&temp,node *&head)
{
    node *prevnode;
    temp=head;
    while(temp->next !=0){
        prevnode=temp;
        temp=temp->next;
    } 
    if(temp==head){
        head=0;
        cout << "Node deleted.\n";
    }
    else{
    prevnode->next=nullptr;    
    cout << "Last node deleted.\n";
    }
    delete temp; 
}
void deleteAnyNode(node *&temp,node *&head,int pos)
{
    int i=1;
    node *prev;
    temp=head;
    while(i<pos){
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    delete temp;

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

        temp->next=0;

        cout<<"0-Quit 1-Cont";
        cin>>choice;

    
    }


    // deleteFirstNode(head);

    // deleteLastNode(temp,head);

    int pos;
    cout<<"Enter position";
    cin>>pos;
    deleteAnyNode(temp,head,pos);

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

