class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
        //node 1 2 3 4 5
       Node* prev=del_node; //3
       Node* curr=del_node->next; //4
       Node* next=del_node->next->next; //5
       //copy data
       prev->data=curr->data;
       //link
       prev->next=next;
       
       delete curr;
       
    }

};
