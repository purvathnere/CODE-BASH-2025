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
//=======================================================================================================================================================
    #include <iostream>
using namespace std;
//Multilevel INHERITANCE
class Animal{
  public:
  int age;
  int weight;
  public:
  void speak()
  {
    cout<<"spekaing"<<endl;
  }
  
};
class Dog : public Animal{
  
};
class tommy : public Dog{
  
};


int main() {
  tommy t;
  t.speak();
  //cout<<d.age<<endl;

    return 0;
}
==========================================================================================================================================================
//multiple
#include <iostream>
using namespace std;

// Base Class 1
class Animal {
public:
    int age;
    int weight;

    void speak() {
        cout << "Speaking" << endl;
    }
};

// Base Class 2
class Pet {
public:
    string name;

    void showName() {
        cout << "Pet's name: " << name << endl;
    }
};

// Derived Class using Multiple Inheritance
class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "Barking" << endl;
    }
};

// Further Derived Class
class Tommy : public Dog {
public:
    void guard() {
        cout << "Tommy is guarding" << endl;
    }
};

int main() {
    Tommy t;
    t.speak();      // Inherited from Animal class
    t.bark();       // Inherited from Dog class
    t.name = "Tommy"; // Inherited from Pet class
    t.showName();   // Function from Pet class
    t.guard();      // Function from Tommy class

    return 0;
}

