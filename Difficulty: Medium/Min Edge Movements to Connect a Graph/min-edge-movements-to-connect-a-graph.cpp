class Solution {
    vector<vector<int>> adjListHelper(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adjList(n);

        for (auto i : edges) {
            adjList[i[0]].push_back(i[1]);
            adjList[i[1]].push_back(i[0]);
        }

        return adjList;
    }
    
    void dfs(int i, vector<vector<int>> &adjList, vector<bool> &visited) {
        visited[i] = true;

        for (auto j : adjList[i]) {
            if (!visited[j]) {
                dfs(j, adjList, visited);
            }
        }
    }
  public:
    int minEdgesReq(int n, vector<vector<int>>& edges) {
        // code here
        
        if (edges.size() < n-1) {
            return -1;
        }
        
        vector<vector<int>> adjList = adjListHelper(n, edges);

        vector<bool> visited(n, false);

        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                ans++;
                
                dfs(i, adjList, visited);
            }
        }

        return ans-1;
        
    }
};