#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    
    CircularQueue(int n){
        size=n;
        arr=new int[n];
        front=rear=-1;
    }
    //when q is full
      bool enqueue(int value){
      if ((front == 0 && rear == size - 1) || (rear + 1) % size == front)

       {
           return false;
       }
       //when q is empty and insetion start
       else if(front ==-1)
       {
           front=rear=0;
       }
       //round ghukar 
       else if(rear==size-1 && front!=0)
       {
           rear=0;
       }
       //normla case
       else
       {
           rear++;
       }
       arr[rear]=value;
       return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front==-1)
        {
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
       if(front==rear)
        {
           front=rear=-1;
        }
        else if(front==size-1)
        {
            front=0;//to maintain cyclic nayure
        }
        else{
            front++;
        }
        return ans;
        
    }
};
