Virtual Function क्या होता है?
जब आप inheritance (विरासत) का इस्तेमाल करते हो — यानी एक base class से derived class बनाते हो — तब आप चाहते हो कि:

"अगर base class का pointer/ reference derived class के object को point कर रहा है, तो derived class का function चले, न कि base class का।"

👉 इसके लिए हम base class के function को virtual बना देते हैं।

🔸 आसान शब्दों में:
Virtual function का मतलब होता है —
"जो function run-time (program चलते समय) decide हो कि कौन सा चलेगा।"

🔹 Code Example:
cpp
Copy
Edit
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};
🔸 Main function:
cpp
Copy
Edit
int main() {
    Animal* a;     // base class का pointer
    Dog d;

    a = &d;        // base class pointer → derived class object

    a->sound();    // ये किसका sound() call होगा?
    return 0;
}
🔍 Output:
nginx
Copy
Edit
Dog barks
अगर sound() virtual न होता, तो output होता:

nginx
Copy
Edit
Animal sound
🔑 Point to Remember:
Feature	Explanation
Virtual keyword	Base class के function को special बनाता है
Use	Run-time polymorphism के लिए
Resolves at	Run-time (late binding)
Without virtual	Base class का function call होगा
With virtual	Derived class का function call होगा

🧠 क्यों ज़रूरी है?
कभी-कभी आप base class pointer से derived class object को handle करना चाहते हो, लेकिन actual behavior derived class का चाहिए — वही virtual function देता है।

