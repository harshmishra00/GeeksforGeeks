class Solution {
  public:
    int maxRectSum(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        int maxSum = INT_MIN;

        for (int left = 0; left < m; left++) {
            vector<int> temp(n, 0);
            for (int right = left; right < m; right++) {
                for (int i = 0; i < n; i++) {
                    temp[i] += mat[i][right];
                }

                int currSum = temp[0];
                int bestSum = temp[0];
                for (int i = 1; i < n; i++) {
                    currSum = max(temp[i], currSum + temp[i]);
                    bestSum = max(bestSum, currSum);
                }

                maxSum = max(maxSum, bestSum);
            }
        }
        return maxSum;
    }
};
