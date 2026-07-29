class Solution {
  public:
  
    bool isValid(vector<int>&arr, int mid, int k){
        int last=arr[0];
        int n=arr.size();
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i]-last>=mid){
                count++;
                last=arr[i];
            }
            if(count>=k) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int left=1;
        int right=arr[n-1]-arr[0];
        int ans=0;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(isValid(arr,mid, k)){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};