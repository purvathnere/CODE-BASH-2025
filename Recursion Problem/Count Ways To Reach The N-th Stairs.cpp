//TLE


#include <bits/stdc++.h>
using namespace std;

int countDistinctWays(int nStairs) {
    // Base cases
    if (nStairs < 0) {
        return 0; // Invalid case
    }
    if (nStairs == 0) {
        return 1; // One way to stay at the base
    }
    if (nStairs == 1) {
        return 1; // One way to climb to the first stair
    }

    // Recursive calls
    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
    return ans;
}
