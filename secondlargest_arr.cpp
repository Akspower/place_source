#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int secondlargest(int arr[],int n){
    int l=0,sl=0;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            l=arr[i];
        }
    }
    for(int i=0;i<n;i++){
       if(sl>arr[i]) continue;
        if(arr[i]>sl && arr[i]<l ){
            sl=arr[i];
        }
    }
    cout<<sl<<" " <<l;
}


int main (){

int arr[]={2,2,6,45,45,75,1,75};
int n=sizeof(arr)/sizeof(arr[0]);

secondlargest(arr,n);







}