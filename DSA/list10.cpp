// Reverse a doubly linked-list 
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

    node *current,*next;    
    current=head;
    while(current!=0){
    next=current->next;
    current->next=current->prev;
    current->prev=next;
    current=next;
    }
    current=head;
    head=tail;
    tail=current;


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
