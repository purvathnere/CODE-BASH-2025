class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
  int formula=n*(n+1)/2;
  int temp=0;
  for(int ele:arr)
  {
     temp+=ele; 
  }
  return (formula-temp);
    }
};
