class Solution {
  public:
    bool isValid(vector<int>& nums, int mid, int k){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]/mid);
            if(nums[i]%mid!=0){
                sum+=1;
            }
        }
        return sum<=k;
    }
    int kokoEat(vector<int>& arr, int k) {
        int left=1;
        int ans=0;
        int right=*max_element(arr.begin(),arr.end());
        
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isValid(arr,mid,k)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
};