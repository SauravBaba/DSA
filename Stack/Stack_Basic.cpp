#include<iostream>
using namespace std;
#define n 3 

 class stack{
    
    int *arr;
    int top;

    public:
      stack(){
       arr =new int[n];
       top=-1;
      }
  
  void push(int x){
    if(top==n-1){
      cout<<"Stack Overflow"<<endl;
      return;
    }
   
    arr[++top]=x;
  }

  void pop(){
    if(top==-1){
      cout<<"Stack Underflow !"<<endl;
      return ;
    }

   top--;
  }

  int Top(){
     if(top==-1){
      cout<<"No elements in Stack !"<<endl;
      return -1;
    }
    return arr[top];


  }

  bool isEmpty(){
     return top==-1;
  }
  };


int main(){
   stack st;
   st.push(0);
   st.push(1);
   st.push(2);
   st.pop();
   st.pop();
     
   cout<<st.Top()<<endl;
   cout<<st.isEmpty()<<endl;
  
   
 return 0;
}