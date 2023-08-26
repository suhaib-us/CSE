// singly circular linked-list (tail) reverse
#include <iostream>
using namespace std;
struct node
{
    int a;
    struct node *next;
};

int main()
{
    node *tail;
    tail = nullptr;
    int choice;
    choice = 1;
    while (choice)
    {

        node *newNode = new node;

        cout << "Enter data";
        cin >> newNode->a;

        if (tail == 0)
        {
            tail = newNode; // first node
            tail->next = newNode;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }

        cout << "0-Quit 1-Cont";
        cin >> choice;
    }


    node *prev,*current,*next;
    current=tail->next;
    next=current->next;
    prev=nullptr;
    if(tail==nullptr){
        cout<<"No node";
    }
    else if(tail->next==tail){
        cout<<"Only one node";
    }
    else{
        while(current != tail){
            prev=current;
            current=next;
            next=current->next;

            current->next=prev;
        }
        next->next=current;    //or simply tail
        tail=next;
    }
    


    node *temp;
    temp = tail->next;
    int count = 0;

    do
    {
        cout << temp->a << endl;
        temp = temp->next;
        count++;
    } while (temp != tail->next);

    cout << count;
    return 0;
}