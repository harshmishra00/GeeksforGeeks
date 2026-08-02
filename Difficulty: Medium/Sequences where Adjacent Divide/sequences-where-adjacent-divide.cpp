class Solution {
  public:
    
    int solve(int n, int m, int len, int last, vector<vector<int>>& dp) {
        
        
        if (len == n) {
            return 1;
        }
        
        if (dp[len][last] != -1) {
            return dp[len][last];
        }
        
        int ans = 0;
        for (int i=1; i<=m; i++) {
            
            if (last == 0 || (i % last == 0 || last % i == 0)) {
                ans += solve(n, m, len+1, i, dp);
            }
        }
        
        return dp[len][last] = ans;
    }
    int count(int n, int m) {
        // code here
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return solve(n, m, 0, 0, dp);
    }
};