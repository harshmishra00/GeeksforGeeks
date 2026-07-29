class Solution {
  public:
    bool isValid(vector<int>& nums, int mid, int k, int m){
        int count=0;
        int flower=0;
        for(int c:nums){
            if(c<=mid){
                count++;
                if(count==k){
                    flower++;
                    count=0;
                }
            }else{
                count=0;
            }
        }
        return flower>=m;
    }
    int minDaysBloom(vector<int>& nums, int k, int m) {
        int left=1;
        int right=*max_element(nums.begin(),nums.end());
        int ans=-1;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isValid(nums,mid,k,m)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
};