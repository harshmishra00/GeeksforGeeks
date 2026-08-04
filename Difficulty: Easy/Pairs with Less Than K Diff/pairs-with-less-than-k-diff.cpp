class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        
        int i=0, j=0, cnt=0;
        
        for(; j<n; j++){
            while(arr[j]-arr[i]>=k){
                i++;
            }
            cnt+=(j-i);
        }
        
        return cnt;
    }
};