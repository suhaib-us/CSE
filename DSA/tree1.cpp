// binary tree
#include<iostream>
using namespace std;

struct node {
    int data;
    node* left, *right;
};

node* create() {
    int x;
    node* newnode = new node;
    cout << "Enter data: ";
    cin >> x;
    if (x == -1) {
        return nullptr;
    }
    newnode->data = x;
    cout << "Left child " << x << ": ";
    newnode->left = create();
    cout << "Right child " << x << ": ";
    newnode->right = create();

    return newnode;
}

int main() {
    node* root = create();
}
