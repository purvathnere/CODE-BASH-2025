#include <bits/stdc++.h>
using namespace std;

class sstack{
    int top;
    int *arr;
    int size;
    public:
    sstack()
    {
       top=-1;
       size=10000;
       arr=new int[size];
        
    }
    void push(int x)
    {
        top=top+1;
        arr[top]=x;
    }
    int pop()
    {
        int x=arr[top];
        top=top-1;
        return x;
    }
    int Top()
    {
        return arr[top];
    }
    int Size()
    {
        return top+1;
    }
    
};
int main() {
   sstack s;
   s.push(10);
   s.push(34);
   s.push(90);
   cout<<s.pop()<<endl;
   cout<<s.Top()<<endl;
   cout<<s.pop()<<endl;
   cout<<s.Top()<<endl;
        
    return 0;
}
