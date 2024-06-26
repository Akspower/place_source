
#include <bits/stdc++.h>
using namespace std;
string reverse(string s,int n){
    for(int i=0;i<n/2;i++){
       swap(s[i],s[n-i-1]);
        }
        
   return s;
}

int main() {
    
string s;
cout<<"Enter a string"<<endl;
cin>>s;

int n=s.size();

cout<<reverse(s,n);
    return 0;
}