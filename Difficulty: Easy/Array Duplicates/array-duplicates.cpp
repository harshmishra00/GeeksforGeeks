class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> vec;
        int n=arr.size();
        for(int i = 0; i < n; i++) {
            int index = abs(arr[i]) - 1;  // map value to index
            if(arr[index] < 0) {
                vec.push_back(abs(arr[i])); // duplicate found
            } else {
                arr[index] = -arr[index]; // mark as visited
            }
        }
        
        return vec;
            
        
    }
};