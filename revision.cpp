#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int buy(int * arr,int n){
int buy=arr[0];
int maxi=0;
for(int i=0;i<n;i++){
  if(buy>arr[i]){
    buy=arr[i];
  }
    maxi=max(arr[i]-buy,maxi);
  

}
  return maxi;
 
}







int main(){
 
int arr[]={7,1,3,5,6,4};
int n=sizeof(arr)/sizeof(arr[0]);
int res=buy(arr,n);
cout<<res;
}