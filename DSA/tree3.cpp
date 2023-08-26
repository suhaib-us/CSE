// inorder
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

void inorder(node* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << "Data is: " << root->data << " ";
    inorder(root->right);
}

int main() {
    node* root = create();
    cout << "Inorder traversal is: "; 
    inorder(root);
    return 0;
}
