#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        this->data = d;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != nullptr) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    if (head != nullptr) {
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
}

void insertAtTail(Node*& head, Node*& tail, int d) {
    Node* temp = new Node(d);
    if (tail != nullptr) {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    } else {
        head = tail = temp;
    }
}

void insertAtPosition(Node*& head, Node*& tail, int position, int d) {
    if (position == 1) {
        insertAtHead(head, d);
        if (tail == nullptr) {
            tail = head;
        }
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < position - 1 && temp != nullptr) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        return;
    }

    if (temp->next == nullptr) {
        insertAtTail(head, tail, d);
        return;
    }

    Node* newNode = new Node(d);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteNode(Node*& head, Node*& tail, int position) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < position && temp != nullptr) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        return;
    }

    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    } else {
        tail = temp->prev;
    }

    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }

    delete temp;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    // Insert at head
    insertAtHead(head, 10);
    insertAtHead(head, 20);

    // Insert at tail
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);

    // Insert at position
    insertAtPosition(head, tail, 3, 25); // Insert 25 at position 3

    // Print the list
    cout << "Original list: ";
    print(head);

    // Delete a node at position
    deleteNode(head, tail, 3); // Delete node at position 3

    // Print the list
    cout << "After deleting node at position 3: ";
    print(head);

    // Get and print the length of the list
    cout << "Length: " << getLength(head) << endl;

    return 0;
}
