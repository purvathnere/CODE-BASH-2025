Implementing Stack Using Queue
: = > Only one queue is needed.

Implementing Queue Using Stack
: = >  You typically need two stacks

//ek  approach aur hai , just do it later

#include<iostream>
#include<stack>

using namespace std;
//tc=o(2N)
struct Queue{
    public:
    stack<int>s1,s2;
    void push(int x)
    {
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    cout<<"The element pushed in"<<x<<endl;
    s1.push(x);
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    }
    int Pop()
    {
        if(s1.empty())
        {
            cout<<"stack is empty"<<endl;
            exit(0);
        }
        int val = s1.top();
        s1.pop();
        return val;
    }
    int Top()
    {
        if(s1.empty())
        {
            cout<<"stack is empty"<<endl;
            exit(0);
        }
        return s1.top();
    }
    int size()
    {
        return s1.size();
    }
    
    
};
int main() {
   Queue q;
  q.push(3);
  q.push(4);
  cout << "The element poped is " << q.Pop() << endl;
  q.push(5);
  cout << "The top of the queue is " << q.Top() << endl;
  cout << "The size of the queue is " << q.size() << endl;

    return 0;
}
