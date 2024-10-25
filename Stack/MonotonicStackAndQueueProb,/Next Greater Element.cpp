#include<bits/stdc++.h>
//tc=o(2N)
//sc=o(n)+o(n)
using namespace std;
class Solution{
    public:
    vector<int>nextGreaterElement(vector<int>&nums)
    {
         int n=nums.size();
        vector<int>nge(n,-1);
       
        stack<int>st;
        for(int i=2*n-1;i>=0;i--)
        {
           while (!st.empty() && st.top() <= nums[i % n]) {
                st.pop();
            }
            // If we're still in the first round, assign the next greater element
            if (i < n) {
                if (!st.empty()) {
                    nge[i] = st.top();
                }
            }
            // Push current element into the stack
            st.push(nums[i % n]);
        }
        return nge;  // Return the result
    }
};
int main()
{
    
    Solution obj;
    vector<int>v{5,7,1,2,6,0};
    vector<int>res=obj.nextGreaterElement(v);
    cout<<"The next greater elements are"<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }
}
