class Solution {
  public:
    int bs(vector<int>&nums,int left,int right,int target){
        if(left>right) return left;
        int mid=left+(right-left)/2;
        int ans=right+1;
        
        if(nums[mid]<=target) return bs(nums,mid+1,right,target);
        else return bs(nums,left,mid-1,target);
        
        return ans;
    }
    int upperBound(vector<int>& arr, int target) {
        int n=arr.size();
        return bs(arr,0,n-1,target);
    }
};
