class Solution {
  public:
    int minCost(vector<vector<int>>& mat) {
        // code here
        int n = mat.size() ;
        vector<int> dp(3 , 0) ;

        dp[0] = mat[0][0] ;
        dp[1] = mat[0][1] ;
        dp[2] = mat[0][2] ;

        for(int i=1 ; i<n ; i++){
            vector<int> newDp(3 , INT_MAX) ;
            newDp[0] = min({
                mat[i][0] + dp[1] , mat[i][0] + dp[2] , newDp[0] 
            }) ;

            newDp[1] = min({
                mat[i][1] + dp[0] , mat[i][1] + dp[2] , newDp[1] 
            }) ;

            newDp[2] = min({
                mat[i][2] + dp[1] , mat[i][2] + dp[0] , newDp[2] 
            }) ;

            dp = newDp ;
        }

        return min({
            dp[0] , dp[1] , dp[2]
        });
    }
};