class Solution {
  public:
    int minCost(int n, int i, int d, int c) {
        vector<int> dp(n + 1, 0);

        dp[0] = 0;

        for (int x = 1; x <= n; x++) {
            // Insert one character
            dp[x] = dp[x - 1] + i;

            if (x % 2 == 0) {
                // Build x/2, then copy-paste to get x
                dp[x] = min(dp[x], dp[x / 2] + c);
            } else {
                // Option 1: build (x-1)/2, copy, then insert 1
                dp[x] = min(dp[x],
                            dp[x / 2] + c + i);

                // Option 2: build (x+1)/2, copy, then delete 1
                dp[x] = min(dp[x],
                            dp[(x + 1) / 2] + c + d);
            }
        }

        return dp[n];
    }
};