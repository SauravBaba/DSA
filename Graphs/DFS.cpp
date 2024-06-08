#include<bits/stdc++.h>
using namespace std;


void dfs1(int node,int arr[],vector<int>adj[],vector<int>&ls){
    arr[node]=1;
    ls.push_back(node);

    for(auto it: adj[node]){
        if(!arr[it]){
            dfs1(it,arr,adj,ls);
        }
    }
}

vector<int>dfs(vector<int>adj[],int n){
    int arr[n]={0};  //when starting point is 1 then arr[n+1]
    int start=0;     //when starting point is 1 then start=1
    vector<int>ls;

    dfs1(start,arr,adj,ls);
    return ls;
}


int main(){
    int n,m;cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> res = dfs(adj,n);
    for(int i=0;i<res.size();i++)  cout<<res[i]<<" ";
    
    return 0;
}
