class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int currSum=0;
        for(int i=0;i<k;i++){
            currSum+=arr[i];
        }
        
        int maxSum=currSum;
        for(int right=k;right<n;right++){
            currSum+=arr[right];
            currSum-=arr[right-k];
            maxSum=max(currSum,maxSum);
        }
        return maxSum;
    }
};