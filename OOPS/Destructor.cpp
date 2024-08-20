#include <iostream>
#include <cstring>  // Include this for strlen and strcpy
using namespace std;

class Hero {
public:
    int health;
    char level;
    char *name; // Added name attribute for the copy constructor
    static int timeToComplete;

    // Default Constructor
    Hero() {
        cout << "I am the default constructor" << endl;
        name = new char[100]; // Allocate memory for name
    }

    // Parameterized Constructor
    Hero(int health, char level) {
        this->health = health;
        this->level = level;
        cout << "I am the parameterized constructor" << endl;
    }

    // Copy Constructor
    Hero(Hero &temp) {
        cout << "This is the copy constructor" << endl;
        this->health = temp.health;
        this->level = temp.level;
        
        // Deep copy of the name attribute
        name = new char[strlen(temp.name) + 1];
        strcpy(name, temp.name);
    }

    // Method to get health
    int getHealth() {
        return health;
    }

    // Method to print hero details
    void print() {
        cout << "Health is: " << health << endl;
        cout << "Level is: " << level << endl;
    }

    // Destructor
    ~Hero() {
        cout << "Destructor called" << endl;
        delete[] name; // Release the memory allocated for name
    }
};


int main() {
    Hero a; // Default constructor
    Hero *b = new Hero(100, 'A'); // Parameterized constructor

    // Demonstrating copy constructor
    char name[] = "Babbar";
    strcpy(a.name, name); // Set the name for the first Hero

    Hero c(a); // Copy constructor

    // Modify name of first hero
    a.name[0] = 'G';

    // Print details
    a.print();
    c.print();

    // Clean up dynamically allocated memory
    delete b;

    return 0;
}
