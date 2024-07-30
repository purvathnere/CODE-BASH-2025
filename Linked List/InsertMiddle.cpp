#include<iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;
  Node(int d) {
    this->data = d;
    this->next = NULL;
  }
};

void insertAtHead(Node* &head, int d) {
  Node* temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int d) {
  Node* temp = new Node(d);
  tail->next = temp;
  tail = temp;
}

void insertAtMiddle(Node* &head, int position, int d) {
  if (position == 1) {
    insertAtHead(head, d);
    return;
  }

  Node* temp = head;
  // Traverse to the node just before the insertion point
  for (int i = 1; i < position - 1; i++) {
    if (temp == NULL) {
      cout << "Position out of bounds" << endl;
      return;
    }
    temp = temp->next;
  }

  if (temp == NULL) {
    cout << "Position out of bounds" << endl;
    return;
  }

  // Create the new node and insert it into the list
  Node* newNode = new Node(d);
  newNode->next = temp->next;
  temp->next = newNode;
}

void print(Node* head) {
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl; // To print a newline after the list
}

int main() {
  Node* node1 = new Node(11);
  Node* head = node1;
  Node* tail = node1;
  
  insertAtTail(tail, 10);
  print(head); // Should print: 11 10
  
  insertAtTail(tail, 9);
  print(head); // Should print: 11 10 9
  
  insertAtHead(head, 8);
  print(head); // Should print: 8 11 10 9
  
  insertAtMiddle(head, 3, 22);
  print(head); // Should print: 8 11 22 10 9
  
  return 0;
}
