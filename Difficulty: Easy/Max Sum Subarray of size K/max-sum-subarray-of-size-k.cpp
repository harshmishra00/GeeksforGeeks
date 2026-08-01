class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int maxSum=sum;
        
        int left=0;
        int right=k;
        while(right<n){
            sum+=arr[right];
            sum-=arr[left];
            maxSum=max(maxSum,sum);
            left++;
            right++;
        }
        return maxSum;
        
    }
};