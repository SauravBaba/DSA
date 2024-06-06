#include<iostream>
#include<vector>
using namespace std;

void fun(int i,vector<int>&ds,int arr[],int n,int s){
    if(i==n){
        if(s==5){
        for(auto it: ds) cout<<it<<" ";
          cout<<endl;
        }
        return;
    }

    fun(i+1,ds,arr,n,s);
    ds.push_back(arr[i]);
    s+=arr[i];
    fun(i+1,ds,arr,n,s);
    ds.pop_back();
    s-=arr[i];
  
  
    
}


int main(){
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];

vector<int>ds;

fun(0,ds,arr,n,0);
   
   
 return 0;
}