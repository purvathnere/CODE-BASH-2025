
/*
O(N) tc
O(N) sc
*/#include <bits/stdc++.h>
using namespace std;

string PostfixToPrefix(string s) {
    stack<string> st; // Use a stack to hold prefix expressions

    // Iterate over the postfix expression
    for (int i = 0; i < s.length(); i++) {
        // Skip spaces (if any)
        if (s[i] == ' ') continue;

        // Operands
        if (isalpha(s[i]) || isdigit(s[i])) { // Check for operands
            st.push(string(1, s[i])); // Push the operand as a string
        }
        // Operators
        else { // If the character is an operator
            // Pop the two top elements from the stack
            string t2 = st.top(); 
            st.pop();
            string t1 = st.top();
            st.pop();
            // Form the new prefix expression
            string con = s[i] + t1 + t2;  // Operator first in prefix

            st.push(con); // Push the new expression back to the stack
        }
    }
    return st.top(); // Return the final prefix expression
}

int main() {
    string s = "AB-DE+F*/"; //  postfix expression 
    cout << "Postfix: " << s << endl;
    cout << "Prefix: " << PostfixToPrefix(s) << endl; 
    return 0;
}
