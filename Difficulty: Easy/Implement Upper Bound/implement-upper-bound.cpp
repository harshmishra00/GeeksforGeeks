class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n=arr.size();
        int ans=arr.size();
        int left=0;
        int right=n-1;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(arr[mid]>target){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
                // ans=mid;
            }
        }
        return ans;
    }
};
