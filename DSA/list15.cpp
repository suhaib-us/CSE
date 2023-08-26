// singly circular linked-list (tail) deletion
#include <iostream>
using namespace std;
struct node
{
    int a;
    struct node *next;
};

void deleteBeg(node *&tail)
{
    node *temp;
    temp = tail->next;
    if (tail == nullptr)
    {
        cout << "No node present";
    }
    else if (tail->next == tail)
    {
        tail = nullptr;
        delete temp;
    }
    else
    {
    tail->next = temp->next;
    delete temp;
    }
}

void deleteEnd(node *&tail)
{
    if (tail == nullptr)
    {
        cout << "No node present";
    }
    else if (tail->next == tail)
    {
        tail = nullptr;
    }
    else
    {
        node *current = tail->next;
        node *prev = nullptr;
        while (current->next != tail->next)
        {
            prev=current;
            current = current->next;
        }
        prev->next=tail->next;
        tail=prev;
        delete current;   
    }
}
void deleteAnywhere(node *&tail,int pos){
    node *temp,*prev;
    temp=tail->next;
    prev=nullptr;
    int i=1;
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

    // deleteBeg(tail);
    // deleteEnd(tail);

    int pos;
    cout<<"Enter position";
    cin>>pos;
    deleteAnywhere(tail,pos);



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