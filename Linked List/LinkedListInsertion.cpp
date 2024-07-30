//I DID IT MAN !!!!!!!!!!!!!!!!!!//
#include<iostream>
using namespace std;

class Node{
public:  
  int data;
  Node* next;
  Node(int d)
  {
    this->data=d;
    this->next=NULL;
  }
  
};
void insertAthead(Node* &head,int d)
{
  Node* temp=new Node(d);
  temp->next=head;
  head=temp;
}
void insertAttail(Node* &tail,int d)
{
  Node* temp=new Node(d);
 tail->next=temp;
 tail=temp;

}
void print(Node* &head)
{
 Node* temp=head;

  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
    cout << endl;
}

int main() {
   /*
Node* node1 = new Node(11);
  Node* head = node1;
  
  insertAthead(head, 10);
  print(head);
  
  insertAthead(head, 9);
  print(head);
  //jab bhi tum head print karige print(head ), vo newline dega
  insertAthead(head, 8);
    
  print(head);

*/
 Node* node1 = new Node(11);

  Node* tail = node1;
  Node* head=node1;
  
  insertAttail(tail, 10);
  print(head); // Should print: 11 10
  
  insertAttail(tail, 9);
  print(head); // Should print: 11 10 9
  


    return 0;
}
