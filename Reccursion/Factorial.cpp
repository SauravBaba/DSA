#include<iostream>
using namespace std;

int fun(int n){
    if(n<=1){
        return n;
    }

    int f = fun(n-1);
    int l =fun(n-2);
    return f+l;
}


int main(){
 int n;cin>>n;
 cout<<fun(n);   
   
 return 0;
}