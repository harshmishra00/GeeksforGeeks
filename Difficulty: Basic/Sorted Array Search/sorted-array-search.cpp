class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        int n=arr.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(arr[mid]==k){
                return true;
            }
            if(arr[mid]>k){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return false;
    }
};