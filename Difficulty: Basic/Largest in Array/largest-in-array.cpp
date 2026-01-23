class Solution {
  public:
    int largest(vector<int> &arr) {
        int maxm=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            maxm=max(arr[i],maxm);
        }
        return maxm;
    }
};
