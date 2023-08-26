// linked-list insertion
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
    choice = 1;
    while (choice)
    {

        node *newNode = new node;

        cout << "Enter data";
        cin >> newNode->a;

        // link list

        if (head == 0)
        {
            head = temp = newNode; // first node
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        temp->next = 0;

        cout << "0-Quit 1-Cont";
        cin >> choice;
    }

    // insert at the begining

    // node *newNode= new node;
    // cout<<"Enter data to be inserted";
    // cin>>newNode->a;
    // newNode->next=head;
    // head=newNode;

    // insert at the end

    // node *newNode= new node;
    // cout<<"Enter data to be inserted";
    // cin>>newNode->a;
    // temp->next=newNode;
    // newNode->next=0;

    // insert at any position

    int count;
    count = 0;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }

    int pos, i = 1;
    cout << "Enter position";
    cin >> pos;

    if (pos > count)
    {
        cout << "Invalid position";
    }
    else
    {
        node *newNode = new node;
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        cout << "Enter data to be inserted";
        cin >> newNode->a;
        newNode->next=temp->next;
        temp->next=newNode;
    }

    temp = head;
    while (temp != 0)
    {
        cout << temp->a << endl;
        temp = temp->next;
    }

    return 0;
}