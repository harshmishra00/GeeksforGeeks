class Solution {
  public:
  
    bool isValid(vector<int>&arr, int mid, int k){
        int last=arr[0];
        int count=1;
        for(int x:arr){
            if(x-last>=mid){
                count++;
                last=x;
            }
        }
        return count>=k;
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