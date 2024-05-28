#include<iostream>
using namespace std;

void printRec(int n){
    if(1>n){
        return;
    }
    printRec(n-1);
    cout<<n<<" "; //Backtrack
}




int main(){
  int n;cin>>n;
  printRec(n); 
   
 return 0;
}