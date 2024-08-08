#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int fib(int n){
//   if(n==1) return n;
//   return n*fib(n-1);
// }


// int checkprime(int arr[],int n){
// int first,second;
// first=second=INT_MAX;
// for(int i=0;i<n;i++){
// if(arr[i]<first){
//   second=first;
//   first=arr[i];
// }
// else if(arr[i]<second && arr[i]!=first){
//   second=arr[i];
// }
// }
// return second;

// }





int main(){
 
// int arr[]={1,1,5,4,7};
// int n=sizeof(arr)/sizeof(arr[0]);

// int res=checkprime(arr,n);
// cout<<res;



int a=14;
bitset<8> binary(a);
cout<<binary;

cout<<"\n";
vector <int> v;
while(a>0){
  v.push_back(a%8);
  a/=8;
}
for(int i=v.size()-1;i>=0;i--){
cout<<v[i];
}
}


