#include <iostream>
using namespace std;
class student{
    private:
    string studentname;
    int studentid;
    int studentage;
    //getter and setter is used fr private data memeber
    public:
    //get
    string getstudentname()
    {
        return studentname;
    }
    int getstudentid()
    {
        return studentid;
    }
    int getstudentage()
    {
        return studentage;
    }
    //set
    void setstudentname(string name)
    {
        this->studentname=name;
    }
    void setstudentid(int id)
    {
        this->studentid=id;
    }
    void setstudentage(int age)
    {
        this->studentage=age;
    }
    
    
    
};
int main() {
    //class obj
    student obj;
    obj.setstudentname("Purvanshi Mehta");
    obj.setstudentid(123456789);
    obj.setstudentage(19);
    cout<<"Student name is : "<<obj.getstudentname()<<endl;
    cout<<"stduent id is : "<<obj.getstudentid()<<endl;
    cout<<"stduent age is : "<<obj.getstudentage()<<endl;    
 
    return 0;
}
