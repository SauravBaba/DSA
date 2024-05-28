#include<iostream>
using namespace std;

/* void fun(int n,int sum){
 
   if(n<1){
    cout<<sum;
    return;
   }


  fun(n-1,sum+n);}

*/ 

int fun(int n){
    if(n==0){
      return 0 ;
    }

   return n + fun(n-1);
}


int main(){
int n;cin>>n;
// fun(n,0); //parameterized way
 cout<<fun(n); //functional way
   
 return 0;
}