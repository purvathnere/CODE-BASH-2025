#include <iostream>
using namespace std;

class Human {
private:
    int age;  

public:
    string name;
    int weight;

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Setter for weight
    void setWeight(int w) {
        this->weight = w;
    }
};

class Man : public Human {
public:
    int color;

    void sleep() {
        cout << "Sleeping" << endl;
    }
};

int main() {
    Man obj;

    // Setting values
    obj.name = "John";
    obj.setAge(25);
    obj.setWeight(70);

    // Displaying values
    cout << "Name: " << obj.name << endl;

    cout << "Weight: " << obj.weight << " kg" << endl;
    cout << "Age: " << obj.getAge() << " years" << endl;

    obj.sleep();
    cout<<obj.color<<endl;
    

    return 0;
}
