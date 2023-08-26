// Doubly linked-list deletion
#include <iostream>
using namespace std;
struct node
{
    int a;
    struct node *next;
    struct node *prev;
};

void deleteBeg(node *&head)
{
    node *temp;
    temp = head;
    head = temp->next;
    temp->next = nullptr;
    head->prev = nullptr;
    delete temp;
}
void deleteEnd(node *&tail)
{
    node *temp;
    temp = tail;
    tail = temp->prev;
    temp->prev = nullptr;
    tail->next = nullptr;
    delete temp;
}
void deleteAnywhere(node *&tail,node *&head, int pos)
{
    node *temp;
    temp=head;
    int i=1;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;

    
 
}

int main()
{
    node *head, *tail, *temp;
    head = 0;

    int choice;
    choice = 1;
    while (choice)
    {

        node *newNode = new node;

        cout << "Enter data";
        cin >> newNode->a;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (head == 0)
        {
            head = tail = newNode; // first node
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        cout << "0-Quit 1-Cont";
        cin >> choice;
    }

    // deleteBeg(head);
    // deleteEnd(tail);
    
    int pos;
    cout<<"Enter position";
    cin>>pos;
    deleteAnywhere(tail,head,pos);

    temp = head;
    int count = 0;
    while (temp != 0)
    {
        cout << temp->a << endl;
        temp = temp->next;
        count++;
    }

    cout << "count is:" << count;
    return 0;
}
