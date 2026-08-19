class Solution {
  public:
  
    bool isValid(long long mid, vector<int>&arr, int k){
        long long pages=0;
        int stud=1;
        for(int x:arr){
            if(pages+x<=mid){
                pages+=x;
            }else{
                pages=x;
                stud++;
            }
        }
        return stud<=k;
    }
    int findPages(vector<int> &arr, int k) {
        if(arr.size()<k) return -1;
        long long left=*max_element(arr.begin(),arr.end());
        long long right=accumulate(arr.begin(),arr.end(),0LL);
        long long ans=-1;
        
        while(left<=right){
            long long mid=left+(right-left)/2;
            
            if(isValid(mid,arr,k)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
};