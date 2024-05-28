#include<iostream>
#include<stack>
using namespace std;

void reverseStringChar(string s){
stack<char>st;

for (int i=0;i<s.length();i++)
{
    st.push(s[i]);
}

string result="";
while(!st.empty())
{
    result+=st.top();
    st.pop();
}

cout<< result;
}

int main(){
   string s;
   getline(cin,s);
   reverseStringChar(s);
   return 0;
}