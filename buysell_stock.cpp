#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int profit(int * arr,int n){
int buy=arr[0];
int maxi=0;
for(int i=1;i<n;i++){
    if(buy>arr[i]){
        buy=arr[i];
    }
    // else if(arr[i]-buy>maxi){
    //     maxi=arr[i]-buy;
     else  {
        maxi=max(arr[i]-buy,maxi);
    }
   
}
 return maxi;

}

int main(){
    int arr[]={7,1,5,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<profit(arr,n);
}