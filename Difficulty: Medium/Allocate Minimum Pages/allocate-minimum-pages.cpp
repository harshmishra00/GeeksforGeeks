class Solution {
  public:
    bool isValid(vector<int>&nums,long long mid, long long k){
        long long pages=0; long long student=1;
        for(long long x:nums){
            if(x+pages<=mid){
                pages+=x;
            }else{
                student++;
                pages=x;
            }
        }
        return student<=k; 
            
    }
    long long findPages(vector<int> &nums, int k) {
        if(nums.size()<k) return -1;
        long long ans=-1;
        // code here
        long long left=*max_element(nums.begin(),nums.end());
        long long right=0;
        for(long long x:nums){
            right+=x;
        }
        while(left<=right){
            long long mid=left+(right-left)/2;
            if(isValid(nums,mid,k)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
};