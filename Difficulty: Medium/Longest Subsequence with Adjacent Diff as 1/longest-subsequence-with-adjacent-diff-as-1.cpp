class Solution {
  public:
    int longestSubseq(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]=max(mp[arr[i]-1],mp[arr[i]+1])+1;
            ans=max(ans,mp[arr[i]]);
        }
        return ans;
    }
};