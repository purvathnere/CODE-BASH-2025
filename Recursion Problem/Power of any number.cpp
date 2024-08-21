#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * power(x, n - 1);
    }
}

int main() {
    int x, n;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (n): ";
    cin >> n;
    
    int ans = power(x, n);
    cout << x << "^" << n << " = " << ans << endl;
    
    return 0;
}
