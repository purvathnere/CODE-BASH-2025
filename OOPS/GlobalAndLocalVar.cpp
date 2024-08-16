#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

void display() {
    // Local variable
    int localVar = 20;
    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable inside function: " << globalVar << endl;
}
void show()
{
    int localvar=100;
    cout<<localvar<<endl;
    cout << "Global Variable inside function: " << globalVar << endl;
    
    
}
int main() {
    cout << "Global Variable inside main: " << globalVar << endl;
    

    // Changing the value of the global variable
    globalVar = 15;

    display();
    globalVar=10000;
    show();

    return 0;
}

