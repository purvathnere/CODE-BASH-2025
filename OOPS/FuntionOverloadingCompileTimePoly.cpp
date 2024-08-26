#include <bits/stdc++.h>
using namespace std;
class A  
{
  public:
void sayHello()
{
  cout<<"I am Happy"<<endl;
}
void sayHello(string name)
{
  cout<<"I am sad"<<endl;
}
int sayHello(string name,int n)
{
  cout<<"I am sad totally"<<endl;
  return n;
}
};
int main()
{
  
A obj;
obj.sayHello("raj");
obj.sayHello();
obj.sayHello("raj",4);
    return 0;
}
