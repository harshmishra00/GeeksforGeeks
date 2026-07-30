class Solution {
  public:
  bool isValid(vector<int>& nums,long long mid, long long k){
        long long n=nums.size();
        long long pages=0; long long students=1;
        for(long long x:nums){
            if(pages+x<=mid){
                pages+=x;
            }else{
                students++;
                pages=x;
            }
        }
        return students<=k;
    }
    long long findPages(vector<int> &arr, int k) {
        if (arr.size()<k) return -1;
        long long ans=-1;
        // code here
        long long left=*max_element(arr.begin(),arr.end());
        long long right=0;
        for(long long x:arr){
            right+=x;
        }
        
        while(left<=right){
            long long mid=left+(right-left)/2;
            if(isValid(arr,mid,k)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
        
    }
    int minTime(vector<int>& arr, int k) {
        return findPages(arr,k);
        
    }
};