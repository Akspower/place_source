#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string para(string s){
    string result;
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==')'){
            j--;
        }
        if(j!=0){
            result+=s[i];
        }
        if(s[i]=='('){
            j++;
        }
    }
    return result;
}

int main(){


string s;
getline(cin,s);

cout<<para(s);

}