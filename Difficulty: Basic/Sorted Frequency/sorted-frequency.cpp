class Solution {
  public:
    // Complete this function
    void freqSorted(vector<int>& arr) {
        // Your code here
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        for (auto it : mp) {
            cout << it.first <<" "<< it.second << endl;
        }
        
    }
};