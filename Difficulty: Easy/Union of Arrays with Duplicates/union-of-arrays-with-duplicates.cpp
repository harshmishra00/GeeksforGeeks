class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> s;
        for(int val:a){
            s.insert(val);
        }
        for(int val : b){
            s.insert(val);
        }
        
        vector<int> vec(s.begin(),s.end());
        
        return vec;
        
    }
};