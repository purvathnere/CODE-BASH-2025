#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

long long sumOrProduct(long long n, long long q)
{
    long long result = 0;
    if (q == 1)
    {
        // Calculate sum of numbers from 1 to n
        result = (n * (n + 1)) / 2;
    }
    else if (q == 2)
    {
        // Calculate product of numbers from 1 to n, modulo 10^9 + 7
        result = 1;
        for (long long i = 1; i <= n; i++) {
            result = (result * i) % MOD;
        }
    }
    return result;
}
