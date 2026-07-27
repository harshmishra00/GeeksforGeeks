class Solution {
  public:
    int findKRotation(vector<int> &nums) {
        int n=nums.size();
        
        int left=0;
        int right=n-1;
        int mini=INT_MAX;
        int index=-1;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(mini>nums[mid]){
                mini=nums[mid];
                index=mid;
            }
            
            if(nums[left]<=nums[mid]){
                if(mini>nums[left]){
                    mini=nums[left];
                    index=left;
                }
                left=mid+1;
            }else{
                if(mini>nums[mid+1]){
                    mini=nums[mid+1];
                    index=mid+1;
                }
                right=mid-1;
            }
        }
        return index;
    }
};
