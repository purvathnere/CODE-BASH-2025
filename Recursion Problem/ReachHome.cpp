#include <iostream>
using namespace std;

void reachHome(int src,int dest)
{
    cout<<"source :"<<src<<"destination : "<<dest<<endl;
    //basecase
    if(src==dest)
    
    {
        cout<<"we reached at destination"<<endl;
        return ;
    }
    
    src--;
    reachHome(src,dest);
}

int main() {
    
    int src=10;
    int dest=1;
    cout<<endl;
    reachHome(src,dest);
  
    return 0;
}
