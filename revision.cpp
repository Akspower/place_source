#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int fib(int n){
//   if(n==1) return n;
//   return n*fib(n-1);
// }


int checkprime(int arr[],int n){
int count =0;
int maxi=0;
for(int i=0;i<n;i++){
  if(arr[i]==0){
    count++;
    maxi=max(maxi,count);
  }
  else{
    count=0;
  }
 
}
return maxi;
}





int main(){
 
int arr[]={1,1,1,0,0,0,0,0,1,1,1,1,1};
int n=sizeof(arr)/sizeof(arr[0]);
int res=checkprime(arr,n);
cout<<res;
}


