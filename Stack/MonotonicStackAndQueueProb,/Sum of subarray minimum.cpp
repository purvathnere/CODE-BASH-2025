//do it again
//tc=o(5n)
//sc=o(5n)
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7; 

vector<int> findnse(int arr[], int n) {
    vector<int> nse(n, n);  // Initialize with n, representing right boundary
    stack<int> st;
    
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            nse[st.top()] = i;  // Right boundary index for the element
            st.pop();
        }
        st.push(i);
    }
    
    return nse;
}

vector<int> findpse(int arr[], int n) {
    vector<int> pse(n, -1);  // Initialize with -1, representing left boundary
    stack<int> st;
    
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            pse[st.top()] = i;  // Left boundary index for the element
            st.pop();
        }
        st.push(i);
    }
    
    return pse;
}

int MiniSubarray(int arr[], int n) {
    vector<int> left = findpse(arr, n);
    vector<int> right = findnse(arr, n);

    int total = 0;
    for (int i = 0; i < n; i++) {
        int leftCount = i - left[i];
        int rightCount = right[i] - i;
        total = (total + (long long)arr[i] * leftCount * rightCount % MOD) % MOD;
    }

    return total;
}

int main() {
    int arr[] = {3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << MiniSubarray(arr, n);
    return 0;
}

/*
with o(n square time complexity)
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7; 

int MiniSubarray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int mini = arr[i];
        for (int j = i; j < n; j++) {
            mini = min(mini, arr[j]);
            sum = (sum + mini) % MOD;
        }
    }
    return sum;
}

int main() {
    int arr[] = {3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int ans = MiniSubarray(arr, n);
    cout << ans << endl;
    return 0;
}

*/
