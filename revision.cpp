#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool valid(string s1){
    stack <char> st;
    for(int i=0;i<s1.length();i++){
        if(st.empty()){
            st.push(s1[i]);
        }
      else if ((st.top()=='('&& s1[i]==')') || 
               (st.top()=='{'&& s1[i]=='}') ||
               (st.top()=='['&& s1[i]==']')) {
                st.pop();
               }
      else {
        st.push(s1[i]);
      }
    }
    return st.size()==0;
}

int main(){
    string s1="()";
    cout<<valid(s1);
}