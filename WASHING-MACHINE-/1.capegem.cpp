#include <bits/stdc++.h>
using namespace std;

void factor(int n)
{
    n = abs(n); // Take absolute value to handle negative numbers
    if (n == 0)
    {
        cout << "No factor";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0) // Check if i is a factor of n
            {
                cout << i << " "; // Print the factor
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    factor(n); // Call the function with the input number

    return 0;
}
