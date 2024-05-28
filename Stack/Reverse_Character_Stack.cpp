#include<iostream>
#include<stack>
using namespace std;

void reverseCharacter(string s){
stack<char> st;

for (int i = 0; i <s.length(); i++)
{
    st.push(s[i]);
}

while(!st.empty()){
    cout<<st.top();
    st.pop();
}



}


int main(){
   string s;
   cin>>s; 
   reverseCharacter(s);
   
 return 0;
}