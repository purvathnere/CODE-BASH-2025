#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";  // Print root->data instead of root
    inorder(root->right);
}

Node* searchBST(Node* root,int key)
{
    if(root==NULL)
    {
        return NULL ;
    }
    if(key==root->data)
    {
        return root;
    }
    if(key<root->data)
    {
       return searchBST(root->left,key);
    }
    else{
        return searchBST(root->right,key);
    }
 
}

Node* insertBST(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }
    
    if (value < root->data) {
        root->left = insertBST(root->left, value);
    } else {
        root->right = insertBST(root->right, value);
    }
    return root;
}

int main() {
    Node* root = NULL;
    root = insertBST(root, 90);
    insertBST(root, 89);
    insertBST(root, 87);
    insertBST(root, 86);
    insertBST(root, 85);
    insertBST(root, 84);
    inorder(root);
    if(searchBST(root,89)==NULL)
    {
        cout<<"Key does not exist";
    }
    else{
        cout<<"Key exist";
    }
    
    return 0;
}
