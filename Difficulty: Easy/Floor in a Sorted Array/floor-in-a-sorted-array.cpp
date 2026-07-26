class Solution {
  public:
    int findFloor(vector<int>& nums, int x) {
        int n=nums.size();
        int ans=-1;
        int left=0;int right=n-1;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(nums[mid]<=x){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};