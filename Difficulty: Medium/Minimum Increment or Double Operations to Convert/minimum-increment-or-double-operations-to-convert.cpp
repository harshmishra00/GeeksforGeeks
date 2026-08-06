class Solution {
  public:
    int countMinOperations(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        int ans = 0;
        int half = 0;
        
        //timecomplexity O(n)  * O(log max(arr[i])) -> o(n*(log(max(arr[i]))))
        //space => o(1)
        for(int i=0; i<n; i++) {       // Step i) loop
            
            int temp = 0;
            
            //log(max(arr[i]))
            while(arr[i] > 0) {      // Step ii) even -> temp++,  Odd -> ans++, arr[i]-- ;
                if(arr[i] % 2 == 0) {
                    arr[i] = arr[i]>>1;
                    
                    temp++;
                } 
                else {
                    ans++;
                    arr[i]--;
                }
            }
            
            half = max(half,temp);    // Step iii.
        }
        
        return ans + half;      // Step iv. return
    }
};