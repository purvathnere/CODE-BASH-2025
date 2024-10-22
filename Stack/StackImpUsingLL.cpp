#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    int size;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
struct sstack{
    Node* top;
    int size;
    sstack()
    {
        top=NULL;
        size=0;
    }

void push(int x)
{
    //create Node
    Node* temp=new Node(x);
    temp->next=top;
    top=temp;
    size=size+1;
}
int pop()
{
    if(top==NULL)
    {
        return -1;
    }
    int topData=top->data;
    Node* temp=top;
    top=top->next;
    delete temp;
    size=size-1;
    return topData;
}
int Top()
{
    if(top==NULL)return -1;
    return top->data;//we simply return top ka data
}
//
bool isEmpty()
{
   return top==NULL;
}
int Size()
{
    return size;
}
};
int main() {
     
sstack s;
s.push(10);
s.push(20);
s.push(15);
s.push(40);
cout<<s.Top()<<endl;
cout<<s.pop()<<endl;
cout<<s.Top()<<endl;
cout<<s.pop()<<endl;
cout<<s.Size()<<endl;
    return 0;
}
