class Solution {
	public:
	int minimumEdgeReversal(vector<vector<int>> &edges, int n, int src, int dest) {
		// code here
		vector<vector<int>> adjList(n + 1), adjRevList(n + 1);
		vector<int>dist(n + 1, 1e9);
		queue<int> q;
		// {node};
		q.push(src);
		dist[src] = 0;

		for (auto &edge:edges) {
			int u = edge[0], v = edge[1];
			adjList[u].push_back(v);
			adjRevList[v].push_back(u);
		}
		while (!q.empty()) {
			int node = q.front(); q.pop();
			for (const int &adjNode:adjList[node]) {
				if (dist[node]<dist[adjNode]) {
					dist[adjNode] = dist[node];
					q.push(adjNode);
				}
			}
			for (const int &adjNode:adjRevList[node]) {
				if (dist[node]+1<dist[adjNode]) {
					dist[adjNode] = dist[node]+1;
					q.push(adjNode);
				}
			}
		}
		return dist[dest] == 1e9?-1:dist[dest];
	}
};