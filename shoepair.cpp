
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {


int n;
cin>>n;
vector<string> s(n);
for(int i=0;i<n;i++){
    cin>>s[i];
}
vector<int>left(100,0);
vector<int>right(100,0);
int pair=0;
for(auto &l:s){
    int size=stoi(l.substr(0,l.size()-1));
    char c=l.back();
    if(c=='L'){
        left[size]++;
    }
      else if(c=='R'){
        right[size]++;
    }
 
}
   for(int i=0;i<100;i++){
    pair+=min(left[i],right[i]);
    }
    cout<<pair;


    return 0;
}

//input is firstly 5 then 10L 10R 2L 3R 5R