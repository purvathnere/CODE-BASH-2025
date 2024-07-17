#include <iostream>
using namespace std;

   
    struct Node{
        int data;
        Node* left;
        Node* right;
        Node(int val)
        {
            data=val;
            left=nullptr;
            right=nullptr;
        }
    
    
};
Node* insert(Node* root,int val)
{
    if(root==nullptr)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=insert(root->left,val);
    }
  else
    {
        root->right=insert(root->right,val);
    }
   return root;
}
void inordertraversal(Node* root)
{
    if(root==nullptr){return;}
  inordertraversal(root->left);
  cout<<root->data<<" ";
  inordertraversal(root->right);  
}
void preordertraversal(Node* root)
{
     if(root==nullptr){return;}
     cout<<root->data<<" ";
  preordertraversal(root->left);
 
  preordertraversal(root->right);  
}
void postordertraversal(Node* root)
{ if(root==nullptr){return;}
    
  postordertraversal(root->left);

  postordertraversal(root->right);  
    cout<<root->data<<" ";
} 
int main()
{
    Node* root=nullptr;
    root=insert(root,80);
    insert(root,79);
    insert(root,78);
    insert(root,77);
    insert(root,76);
    insert(root,75);
    insert(root,74);
    insert(root,73);
    cout<<"inordertraverTraversal: ";
    inordertraversal(root);
    cout<<endl;
    cout<<"preorderTraversal: ";
    preordertraversal(root);
    cout<<endl;
    cout<<"postorderTraversal: ";
    postordertraversal(root);
    cout<<endl;
    
    return 0;
}
