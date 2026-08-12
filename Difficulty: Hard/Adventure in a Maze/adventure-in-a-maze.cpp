class Solution {
private:
const int mod= 1e9 + 7;
pair<int, int> get_ans(vector<vector<int>> &grid,int i,int j,vector<vector<pair<int, int>>> &dp) {
 
if (i < 0 || i >= grid.size() ||j < 0 || j >= grid[0].size()) {
return make_pair(0, 0);
}
if (i == grid.size() - 1 and j == grid[0].size() - 1) {
return make_pair(1, grid[i][j]);
}
if (dp[i][j].first != -1) {
return dp[i][j];
}
int path = 0;
int maxi = 0;
if (grid[i][j] == 1) {
 
pair<int, int> right =get_ans(grid, i, j + 1, dp);
 
path = right.first % mod;
 
if (right.second != 0) {
maxi = grid[i][j] + right.second;
}
}
else if (grid[i][j] == 2) {
 
pair<int, int> down =get_ans(grid, i + 1, j, dp);
 
path = down.first %mod;
 
if (down.second != 0) {
maxi = grid[i][j] + down.second;
}
}
else if (grid[i][j] == 3) {
 
pair<int, int> right =get_ans(grid, i, j + 1, dp);
 
pair<int, int> down =
get_ans(grid, i + 1, j, dp);
 
path = (right.first + down.first) %mod;
 
if (right.second != 0) {
maxi = max(maxi,grid[i][j] + right.second);
}
 
if (down.second != 0) {
            maxi = max(maxi,grid[i][j] + down.second);
}
}
 
return dp[i][j] = make_pair(path, maxi);
}
 
public:
 
vector<int> findWays(vector<vector<int>> & grid) {
 
int n = grid.size();
int m = grid[0].size();
vector<vector<pair<int, int>>>dp(n,vector<pair<int, int>> (m, make_pair(-1, -1)));
pair<int, int> result =get_ans(grid, 0, 0, dp);
vector<int> ans;
ans.push_back(result.first %mod);
ans.push_back(result.second);
 
return ans;
}
};