#include <iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
void push(int element)
{
    if(size-top>1)
    {
        top++;
        arr[top]=element;
    }
    else
    {
        cout<<"stack full ho gyaa hian";
    }
}
void pop()
{
   if(top>=0)
   {
       top--;
   }
   else{
       cout<<"stack me kuch nhia hia "<<endl;
      
   } 
}
int peek()
{
  if(top>=0)
  {
      return arr[top];
  }  
  else{
      cout<<"stack me -1 hai means koi bhi element nahi hia , sab khatam";
      return -1;
  }
}
bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else{
        return false;
    }
}
    
};
int main()
{
    Stack st(5);
    st.push(90);
     st.push(85);
      st.push(80);
      st.push(75);
       st.push(06);
       cout<<st.peek()<<endl;
       st.pop();
       cout<<st.peek()<<endl;
       st.pop();
        st.pop();
         st.pop();
          st.pop();
          cout<<st.peek()<<endl;
          
     
    return 0;
}
