#include <bits/stdc++.h>
using namespace std;

class B {
public:
    int a;
    int b;

    int add() {
        return a + b;
    }

    // Overloading the + operator
    void operator+(B &obj2) {
        int value1 = this->a;//10
        int value2 = obj2.a;//13
        cout << value2 - value1 << endl;
        cout << "I am Man" << endl;
    }

    // Overloading the () operator
    void operator()() {
        cout << "main bracket hu: " << this->a << endl;
    }
};

int main() {
    B obj1, obj2;
    obj1.a = 10;
    obj2.a = 13;

    obj1 + obj2; // Calls the overloaded + operator
    obj1();      // Calls the overloaded () operator

    return 0;
}
