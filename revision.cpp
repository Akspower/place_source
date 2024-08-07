#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
  if(n==1) return n;
  return n*fib(n-1);
}







int main(){
 
int n=5;
int res=fib(n);
cout<<res;
}