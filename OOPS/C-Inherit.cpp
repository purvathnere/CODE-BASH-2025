1. Single Inheritance
एक derived class, एक base class से inherit करती है।

cpp
Copy
Edit
#include <iostream>
using namespace std;

class Human {
public:
    void speak() {
        cout << "Human is speaking" << endl;
    }
};

class Man : public Human {
public:
    void walk() {
        cout << "Man is walking" << endl;
    }
};

int main() {
    Man obj;
    obj.speak();  // from Human
    obj.walk();   // from Man
    return 0;
}
✅ 2. Multilevel Inheritance
एक class दूसरी class से inherit करती है और फिर कोई तीसरी class उस दूसरी class से inherit करती है।

cpp
Copy
Edit
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy is weeping" << endl;
    }
};

int main() {
    Puppy p;
    p.eat();
    p.bark();
    p.weep();
    return 0;
}
✅ 3. Multiple Inheritance
एक derived class, दो या दो से अधिक base classes से inherit करती है।

cpp
Copy
Edit
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "This is class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "This is class B" << endl;
    }
};

class C : public A, public B {
public:
    void showC() {
        cout << "This is class C" << endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}
✅ 4. Hierarchical Inheritance
एक ही base class से कई derived classes inherit करती हैं।

cpp
Copy
Edit
#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Driving a car" << endl;
    }
};

class Bike : public Vehicle {
public:
    void ride() {
        cout << "Riding a bike" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.start();
    c.drive();

    b.start();
    b.ride();

    return 0;
}
✅ 5. Hybrid Inheritance
यह combination होता है two or more types of inheritance का (usually multiple + multilevel)। यह थोड़ा complex होता है।

cpp
Copy
Edit
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

// D inherits from both B and C (B already inherits from A)
class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.showA();  // From A
    obj.showB();  // From B
    obj.showC();  // From C
    obj.showD();  // From D

    return 0;
}
