// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        return {arr[0], arr[n-1]};
        
    }
};