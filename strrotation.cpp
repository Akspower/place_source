#include<bits/stdc++.h>
using namespace std;

bool checkrotation(string s1,string s2){
    if (s1.length()!=s2.length()){
       return false;
    }
 string concatedstr=s1+s1; // we just add s1 two times and find in concated str if available then rotated
 if(concatedstr.find(s2)!=string::npos){ //npos means not find positin is string
    return true;
 }
 return false;
}



int main (){



string s1="ABCD";
string s2="ACBD";
cout<<checkrotation(s1,s2);





}