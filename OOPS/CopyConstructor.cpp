#include <iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    //deafault Constructor
    Hero()
    {
        cout<<"I am default Constructor"<<endl;
    }
    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
        cout<<"I am parameter"<<endl;
    }
    Hero(Hero& h)
    {
        cout<<"this is a copy Constructor";
        this->health=h.health;
        this->level=h.level;
    }
    int getHealth()
    {
        return health;
    }
    void print()
    {
        cout<<"health is :"<<health<<endl;
        cout<<"level is :"<<level<<endl;
    }
};
int main()
{
   Hero p(70,'c');
   p.print();
    //CREATE COPY Constructor
    Hero R(p);
    R.print();
   
   
  
      return 0;
}
