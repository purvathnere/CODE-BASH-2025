#include <iostream>
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
    cout << root->data << " ";
    inorder(root->right);
}

Node* inorderSuccessor(Node* root) {
    Node* curr = root;
    while (curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

Node* deleteFromBst(Node* root, int key) {
    if (root == NULL) {
        return NULL;
    }
    
    if (key < root->data) {
        root->left = deleteFromBst(root->left, key);
    } else if (key > root->data) {
        root->right = deleteFromBst(root->right, key);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = inorderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteFromBst(root->right, temp->data);
    }
    return root;
}

Node* insertBST(Node* root, int key) {
    if (root == NULL) {
        return new Node(key);
    }
    if (key < root->data) {
        root->left = insertBST(root->left, key);
    } else {
        root->right = insertBST(root->right, key);
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
    cout << endl;


    root = deleteFromBst(root, 89);
    inorder(root);
    cout << endl;

    return 0;
}
