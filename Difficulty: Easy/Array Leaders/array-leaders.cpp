

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n=arr.size();
        vector<int>vec;
        int maxEle=arr[n-1];
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxEle){
                maxEle=arr[i];
                vec.push_back(arr[i]);
            }
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};