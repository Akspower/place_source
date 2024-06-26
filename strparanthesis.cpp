#include<bits/stdc++.h>

using namespace std;

bool validparanthesis( string s1){
    stack<char> temp;
    for(int i=0;i<s1.length();i++){
        if(temp.empty()){
            temp.push(s1[i]);
        }
      else if ((temp.top()=='('&& s1[i]==')') || 
               (temp.top()=='{'&& s1[i]=='}') ||
               (temp.top()=='['&& s1[i]==']')) {
                temp.pop();
               }
      else {
        temp.push(s1[i]);
      }
    }
    return temp.size()==0;
}


int main (){
string s1="[{}]()";
cout<<validparanthesis(s1);








}