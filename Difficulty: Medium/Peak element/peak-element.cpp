class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n=arr.size();
        if(n==1) return 0;
        if(n==2 && arr[0]>arr[1]) return 0;
        if(n==2 && arr[1]>arr[0]) return 1;
        if(arr[n-1]>arr[n-2]) return n-1;
        int left=0;
        int curr=1;
        int next=2;
        
        while(next<arr.size()){
            if(arr[curr]>arr[left] && arr[curr]>arr[next]){
                return curr;
            }
            left++;
            curr++;
            next++;
        }
        return 0;
        
    }
};