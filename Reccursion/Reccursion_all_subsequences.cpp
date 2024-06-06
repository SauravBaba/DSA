#include<iostream>
#include<vector>
using namespace std;

void fun(int i,vector<int>&ds,int arr[],int n){
    if(i==n){
        for(auto it: ds){ cout<<it<<" ";
        }
        if(ds.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }

    fun(i+1,ds,arr,n);
    ds.push_back(arr[i]);
    fun(i+1,ds,arr,n);
    ds.pop_back();
  
  
    
}


int main(){
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];

vector<int>ds;

fun(0,ds,arr,n);
   
   
 return 0;
}