#include <bits/stdc++.h>
using namespace std;

bool isvalid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            if (st.empty())  // No bracket in stack and closing bracket found
                return false;

            char ch = st.top();
            st.pop();
            
            // Correct precedence by grouping conditions
            if ((ch == '(' && s[i] == ')') ||
                (ch == '{' && s[i] == '}') || 
                (ch == '[' && s[i] == ']')) {
                continue;  // Match found, continue checking
            } else {
                return false;  // Mismatch found
            }
        }
    }
    return st.empty();  // Return true if stack is empty (balanced)
}

int main()
{
    string s = "({[]})";
    if (isvalid(s)) {
        cout << "Yeah, it's valid!" << endl;
    } else {
        cout << "Nope, it's not valid!" << endl;
    }
    return 0;
}
