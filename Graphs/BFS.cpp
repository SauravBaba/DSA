#include<bits/stdc++.h>
using namespace std;

vector<int>bfs(vector<int>adj[],int n){
      //intial configuration
      int arr[n]={0}; //for 1 indexing arr[n+1]
      arr[0]=1;        //for 1 indexing arr[1]=1
      queue<int>q;
      q.push(0);

      vector<int>res;
      
      while(!q.empty()){
        int node = q.front();
        q.pop();
        res.push_back(node);

        for(auto it : adj[node]){
            if(!arr[it]){
                arr[it]=1;
                q.push(it);
            }
        }

      }

      return res;
}



int main(){
int n,m;cin>>n>>m;
vector<int>adj[n+1];
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int>result=bfs(adj,n);
for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
   
 return 0;
}

/*test case when starting node is 0
 i/p
 8 7
 0 1
 0 2
 0 3
 1 4
 1 5
 2 6
 3 7

o/p
0 1 2 3 4 5 6 7

test case when starting node is 1
 i/p
 8 7
 1 2
 1 3
 1 4
 2 5
 2 6
 3 7
 4 8

o/p
0 1 2 3 4 5 6 7
*/