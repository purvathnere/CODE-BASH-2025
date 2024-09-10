#include <bits/stdc++.h>
using namespace std;

int MaximumSubarray(int arr[], int n) {
    int sum=0;
    int maxi=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
      if(sum>maxi)
      {
          maxi=sum;
      }
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxi;
}

int main() {
    int n = 9;
    int arr[] =  { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = MaximumSubarray(arr, n);
    cout << ans << endl;

    return 0;
}
