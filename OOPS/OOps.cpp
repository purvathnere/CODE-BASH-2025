#include <iostream>
using namespace std;

class Hero {
public:
    int level;
    char health; 

    void print() {
        cout << "Level: " << level << endl;
    }

    // Getter for health
    char getHealth() {
        return health;
    }

    // Setter for health with a condition
    void setHealth(char h, char paswd) {
        if (paswd == 'A') { 
            health = h;
        }
    }

    // Getter for level
    int getLevel() {
        return level;
    }

    // Setter for level
    void setLevel(int lev) {
        level = lev;
    }
};

int main() {
    // Static allocation
    Hero a;
    a.setHealth('B', 'A'); 
    a.setLevel(10); 

    cout << "Health: " << a.getHealth() << endl;
    cout << "Level: " << a.getLevel() << endl;

    // Dynamic allocation
    Hero *b = new Hero;
    b->setHealth('C', 'A'); 
    b->setLevel(20); 

    cout << "Health: " << (*b).getHealth() << endl;
    cout << "Level: " << (*b).getLevel() << endl;

    cout << "Health: " << b->getHealth() << endl;
    cout << "Level: " << b->getLevel() << endl;

    /*
    Hero ramesh;
    ramesh.setLevel(90);
    ramesh.setHealth(11, 'A');
    */

    b->setHealth('D', 'A');
    b->setLevel(30);

    delete b; 

    return 0;
}
