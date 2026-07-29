class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        int cnt=0;
        sort(arr.begin(), arr.end());
        for(int i=1; i<arr.size(); i++){
            if(arr[i]==arr[i-1]+1){
                continue;
            }
            else{
                cnt++;
            }
        }
        return cnt+1;
        
    }
};