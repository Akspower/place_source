#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int fib(int n){
//   if(n==1) return n;
//   return n*fib(n-1);
// }


int checkprime(int n1,int n2){
 int result=min(n1,n2);
 while(result>0){
 if(n1%result==0 && n2%result==0){
   break;
 }
 result--;
 }
 return result;
}




int main(){
 
int n1=33 , n2=54;
int res=checkprime(n1,n2);
cout<<res;
}


