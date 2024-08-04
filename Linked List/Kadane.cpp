class Solution {
  public:
   
    long long maxSubarraySum(vector<int> &arr) {
        long long sum=0;
        long long maxi=LONG_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxi=max(sum,maxi);
            
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
  
    }
};
