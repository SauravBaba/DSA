#include<iostream>
using namespace std;

bool fun(int i,string &s){
    
    if(i>=s.size()/2) return true;
    if(s[i]!=s[(s.size())-1-i]) return false;

    fun(i+1,s);
}


int main(){
  string s;
  cin>>s;
  cout<<fun(0,s); 
return 0;
} 
