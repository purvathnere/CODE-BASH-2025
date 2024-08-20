class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long maxi=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        long long prod=1;
	        for(int j=i;j<n;j++)
	        {
	            prod=prod*arr[j];//everytime we add value from arrya=arr[j]
	            maxi=max(prod,maxi);
	        }
	    }
	    return maxi;
	}
};
