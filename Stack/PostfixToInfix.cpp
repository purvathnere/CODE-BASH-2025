#include <bits/stdc++.h>
using namespace std;
//for big value it cant work , i think = o(n)

string Postfixtoinfix(string s) {
    stack<string> st; // Use a stack to hold infix expressions
    for (int i = 0; i < s.length(); i++) {
        //operands
        if (isalpha(s[i]) || isdigit(s[i])) { // Check for operands
            st.push(string(1, s[i])); // Push the operand as a string
        }
        //operators
         else { // If the character is an operator
            // Pop the two top elements from the stack
            string t1 = st.top(); 
            st.pop();
            string t2 = st.top();
            st.pop();
            // Form the new infix expression
            string con = '(' + t2 + s[i] + t1 + ')';
            st.push(con); // Push the new expression back to the stack
        }
    }
    return st.top(); // Return the final infix expression
}

int main() {
    string s = "ab*c+"; // Valid postfix expression
    cout << "Postfix: " << s << endl;
    cout << "Infix: " << Postfixtoinfix(s) << endl; 
    return 0;
}
