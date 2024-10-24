#include <bits/stdc++.h>
using namespace std;
/*
iteration and adding tc=o(2n)
sc=o(n)
*/

string PrefixToPostfix(string s) {
    stack<string> st; // Use a stack to hold postfix expressions

    // Iterate over the prefix expression
    for (int i = s.length() - 1; i >= 0; i--) {
        // Skip spaces (if any)
        if (s[i] == ' ') continue;

        // Operands
        if (isalpha(s[i]) || isdigit(s[i])) { // Check for operands
            st.push(string(1, s[i])); // Push the operand as a string
        }
        // Operators
        else { // If the character is an operator
            // Pop the two top elements from the stack
            string t1 = st.top(); 
            st.pop();
            string t2 = st.top();
            st.pop();
            // Form the new postfix expression
            string con = t1 + t2 + s[i]; // Operator comes last in postfix

            st.push(con); // Push the new expression back to the stack
        }
    }
    return st.top(); // Return the final postfix expression
}

int main() {
    string s = "/-AB*+DEF"; 
    cout << "Prefix: " << s << endl;
    cout << "Postfix: " << PrefixToPostfix(s) << endl; 
    return 0;
}
