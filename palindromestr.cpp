// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

string palindrome(string s,int n){
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return "NO";
        }
        
    }
    return "YES";
}
//also use reverse
//reverse(s.begin(),s.end());

int main() {
    
string s;
cout<<"Enter a string"<<endl;
cin>>s;



int n=s.size();

cout<<palindrome(s,n);
    return 0;
}