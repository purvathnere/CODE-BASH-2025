#include <iostream>
using namespace std;
void reverse(string &name,char s,char e)
{
    //base case
  if(s>=e){return;}
  //swap one case
  swap(name[s],name[e]);
  reverse(name,s+1,e-1);
}

int main() {
   
  string name="PURVANSHI";
  reverse(name,0,name.size()-1);
  cout<<name<<endl;
  
    return 0;
}
