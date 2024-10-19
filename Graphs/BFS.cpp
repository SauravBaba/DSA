#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<int> adj[], int n, int startNode) {
    // Initialize the visited array for 1-indexed nodes
    vector<int> arr(n+1, 0);  // Use vector instead of int array for better practice
    arr[startNode] = 1;  // Mark the start node as visited
    queue<int> q;
    q.push(startNode);  // Push the starting node into the queue

    vector<int> res;

    // BFS loop
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        res.push_back(node);

        for (auto it : adj[node]) {
            if (!arr[it]) {  // If node `it` has not been visited
                arr[it] = 1;  // Mark as visited
                q.push(it);   // Push the neighbor node into the queue
            }
        }
    }

    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> adj[n+1];
    
    // Input the edges of the graph
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int startNode;
    cin >> startNode;

    // Call BFS with the starting node
    vector<int> result = bfs(adj, n, startNode);

    // Output the BFS traversal result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}


/*Test Case 1:Basic Connected Graph

5 4         # Number of nodes (n=5) and edges (m=4)
1 2         # Edge between node 1 and 2
2 3         # Edge between node 2 and 3
2 4         # Edge between node 2 and 4
4 5         # Edge between node 4 and 5
1           # Start node for BFS

1 -- 2 -- 3
     | 
     4


1 2 3 4 5   # BFS traversal from node 1


Test Case 2: Tree Structure
      1
     / \
    2   3
       / \
      4   5


5 4         # Number of nodes (n=5) and edges (m=4)
1 2         # Edge between node 1 and 2
1 3         # Edge between node 1 and 3
3 4         # Edge between node 3 and 4
3 5         # Edge between node 3 and 5
3           # Start node for BFS

3 1 4 5 2   # BFS traversal starting from node 3

Test Case 3: Disconnected Graph

1 -- 2       3 -- 4

4 2         # Number of nodes (n=4) and edges (m=2)
1 2         # Edge between node 1 and 2
3 4         # Edge between node 3 and 4
1           # Start node for BFS

1 2         # BFS traversal starting from node 1 (disconnected part)


Test Case 4: BFS Starting from Middle Node

1 -- 2 -- 3 -- 4

4 3         # Number of nodes (n=4) and edges (m=3)
1 2         # Edge between node 1 and 2
2 3         # Edge between node 2 and 3
3 4         # Edge between node 3 and 4
3           # Start node for BFS

3 2 4 1     # BFS traversal starting from node 3


Test Case 5: Single Node Graph

1

1 0         # Number of nodes (n=1) and edges (m=0)
1           # Start node for BFS

1           # Only one node in the graph, BFS starts and ends at node 1

Test Case 6: Cycle Graph

1 -- 2
|    |
4 -- 3

4 4         # Number of nodes (n=4) and edges (m=4)
1 2         # Edge between node 1 and 2
2 3         # Edge between node 2 and 3
3 4         # Edge between node 3 and 4
4 1         # Edge between node 4 and 1
2           # Start node for BFS

2 1 3 4     # BFS traversal starting from node 2


Test Case 7: Complete Graph

1 -- 2
| \/ |
| /\ |
3 -- 4

4 6         # Number of nodes (n=4) and edges (m=6)
1 2         # Edge between node 1 and 2
1 3         # Edge between node 1 and 3
1 4         # Edge between node 1 and 4
2 3         # Edge between node 2 and 3
2 4         # Edge between node 2 and 4
3 4         # Edge between node 3 and 4
4           # Start node for BFS

4 1 2 3     # BFS traversal starting from node 4


*/