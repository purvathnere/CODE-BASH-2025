#include <bits/stdc++.h>
using namespace std;
//RUNTIME POLYMORPHISM - method overriding
class Animal{
    public:
    void speak()
    {
        cout<<"Speaking.................."<<endl;
    }
};
class Dog : public Animal{
    public:
    void speak()
    {
        cout<<"Barking................"<<endl;
    }
};
int main() {
 
    Dog obj;
    obj.speak();

    return 0;
}
