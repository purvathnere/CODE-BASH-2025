#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    // Friend function declaration
    friend void showLength(Box b);
};

// Friend function definition
void showLength(Box b) {
    // Accessing private member
    cout << "Length of the box is: " << b.length << endl;
}

int main() {
    Box b1;
    showLength(b1);  // Call the friend function
    return 0;
}
