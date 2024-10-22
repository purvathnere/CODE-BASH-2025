#include <bits/stdc++.h>
using namespace std;

class qqueue {
    int *arr;
    int front, rear, currSize, maxSize;

public:
    // Default constructor with fixed size 16
    qqueue() {
        maxSize = 16;  // Missing maxSize initialization
        arr = new int[maxSize];
        front = -1;
        rear = -1;
        currSize = 0;
    }

    // Constructor with custom size
    qqueue(int maxSize) {
        this->maxSize = maxSize;  // Proper initialization of maxSize
        arr = new int[maxSize];
        front = -1;
        rear = -1;
        currSize = 0;
    }

    void push(int x) {
        if (currSize == maxSize) {
            cout << "Queue full hai" << endl;
            exit(1);
        }
        if (rear == -1) {
            rear = 0;
            front = 0;
        } else {
            rear = (rear + 1) % maxSize;
        }
        arr[rear] = x;  // Missing line to assign the element
        cout << "Rear pr element: " << rear << " added" << endl;
        currSize++;
    }

    int pop() {
        if (front == -1) {
            cout << "Pop ke liye kuch hai hi nahi, queue is empty" << endl;
            return -1;
        }

        int popped = arr[front];  // Store the element to be popped

        if (currSize == 1) {
            // Destroying the queue if only one element is left
            rear = -1;
            front = -1;
        } else {
            front = (front + 1) % maxSize;
        }
        currSize--;
        return popped;  // Return the popped element
    }

    int Top() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int Size() {
        return currSize;
    }
};

int main() {
    qqueue q;
    q.push(10);
    q.push(34);
    q.push(90);
    q.push(46);

    cout << q.pop() << endl;  // Should print 10
    cout << q.Top() << endl;  // Should print 34
    cout << q.pop() << endl;  // Should print 34
    cout << q.Top() << endl;  // Should print 90

    return 0;
}
