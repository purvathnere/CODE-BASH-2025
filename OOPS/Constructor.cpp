#include <iostream>
using namespace std;

class Hero {
    public:
    int health;  // Define the health variable

    // Default constructor
    Hero() {
        cout << "Hello, my name's Hero" << endl;
    }

    // Parameterized constructor
    Hero(int health) {
        cout << "This is a parameterized constructor" << endl;
        this->health = health;
    }

    // Member function to get health
    int getHealth() {
        return health;
    }
};

int main() {
    // Creating an object with a parameterized constructor
    Hero h1(10);
    cout << "Health of h1: " << h1.getHealth() << endl;

    // Dynamically creating an object
    Hero *h = new Hero(11);
    cout << "Health of dynamically allocated Hero: " << h->getHealth() << endl;

    // Deleting dynamically allocated object to avoid memory leak
    delete h;

    return 0;
}
