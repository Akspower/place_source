
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int pass(string s,string m){
    int count=0;
    map<char,bool> mp;
    for(int i=0;i<m.size();i++){
        mp[m[i]]=true;
    }
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==true)
        count++;
    }
    return count;
}

int main() {


string s;
getline(cin,s);
string m;
getline(cin,m);
cout<<pass(s,m);




    return 0;
}