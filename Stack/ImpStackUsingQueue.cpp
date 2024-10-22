#include <bits/stdc++.h>
using namespace std;
class sstack{
    queue<int>q;
    public:
  
    //push=o(N)
    void push(int x)
    {
        int s=q.size();
        q.push(x);
        for(int i=0;i<s;i++)
        {
            q.push(q.front());
            q.pop();
        }
    
    }
    int pop()
    {
        //o(1)
        int n=q.front();
        q.pop();
        return n;
    }
    int Top()
    { //o(1)
        return q.front();
    }
    int Size()
    { //o(1)
        return q.size();
    }
    
};
int main() {
     
 sstack s;
  s.push(3);
  s.push(2);
  s.push(4);
  s.push(1);
  cout << "Top of the stack: " << s.Top() << endl;
  cout << "Size of the stack before removing element: " << s.Size() << endl;
  cout << "The deleted element is: " << s.pop() << endl;
  cout << "Top of the stack after removing element: " << s.Top() << endl;
  cout << "Size of the stack after removing element: " << s.Size();

    return 0;
}
