#include <bits/stdc++.h>
using namespace std;

int maxEle(int arr[], int n) {
    map<int, int> count;
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (auto it : count) {
        if (it.second > n / 2) {
            return it.first;
        }
    }
    return -1;
}

int main() {
    int n = 16;
    int arr[] = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    int ans = maxEle(arr, n);
    cout << ans << endl;

    return 0;
}
