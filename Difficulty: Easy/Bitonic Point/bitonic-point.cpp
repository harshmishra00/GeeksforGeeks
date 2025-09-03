// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        int n=arr.size();
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return arr[mid];
            } else if(arr[mid]<arr[mid-1]){
                end=mid-1;
            }else{
                st=mid+1;
            }
            
        }
        return -1;
        
    }
};