class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n=arr.size();
        long long int actSum=0;
        for(int i=0;i<n;i++){
            actSum+=arr[i];
        }
        long long int expSum=(long long)(n+1)*(n+2)/2;
        return expSum-actSum;
    }
};