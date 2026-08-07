class Solution {
  public:
    int maxOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left=0;
        int right=0;
        int count=0;
        int maxLen=0;
        
        while(right<n){
            if(nums[right]==0){
                count++;
            }
            
            while(count>k){
                if(nums[left]==0) count--;
                left++;
            }
            
            maxLen=max(maxLen,right-left+1);
            right++;
        }
        return maxLen;
    }
};
