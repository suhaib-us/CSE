// preorder
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

void preorder(node* root) {
    if (root == nullptr) {
        return;
    }
    cout << "Data is: " << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    node* root = create();
    cout << "Preorder traversal is: ";
    preorder(root);
    return 0;
}
