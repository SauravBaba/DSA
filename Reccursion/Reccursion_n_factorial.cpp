#include<iostream>
using namespace std;

// int fun(int n){

//    if(n==0){
//     return 1;
//    }

//     return n*fun(n-1);
// }


void fun(int n, int i){
    if(n<1){
       cout<<i;
        return ;
    }
    
    fun(n-1,i*n);
}


int main(){
int n;cin>>n;
//cout<<fun(n); //functional waay
fun(n,1); //parameterized  
   
 return 0;
}