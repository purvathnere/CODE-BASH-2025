
class Solution {
  public:

    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        int start=0;
        long long temp=0;
        for(int end=0;end<n;end++)
       {
        temp=temp+arr[end];
        while(temp>s && start<end)
        {
            temp=temp-arr[start];
            start++;
        }
        if(temp==s)
        {
        return{start+1,end+1};
        }
        }
        return {-1};
    }
 
};
