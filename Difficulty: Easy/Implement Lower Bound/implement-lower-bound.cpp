class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n=arr.size();
        int left=0;int right=n-1;
        int ans=n;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(arr[mid]>=target){
                ans=mid;
                right=mid-1;
            }
            else if(arr[mid]<target){
                left=mid+1;
            }
                
        }
        return ans;
        
    }
};
