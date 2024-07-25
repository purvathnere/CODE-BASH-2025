#include <bits/stdc++.h> 
class Queue {
public:
int *arr;
int rear;
int qfront;
int size;
    Queue() {
      size=10000007;
      arr=new int[size];
      rear=0;
      qfront=0;
    }

    bool isEmpty() {
        if(qfront==rear)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
      if(rear==size)
      {
       cout<<"stack is full,No insertion now";
      }
      else{
          arr[rear]=data;
          rear++;
      }
    }

    int dequeue() {
     if(qfront==rear)
     {
         return -1;
     } 
     else{
         int ans=arr[qfront];
         arr[qfront]=-1;
         qfront++;
         if(qfront==rear)
         {
             qfront=0;
             rear=0;
         }
         return ans;
     }  
    }

    int front() {
      if(qfront==rear)
      {
          return -1;
      }
      else
      {
          return arr[qfront];
      }
    }
};
