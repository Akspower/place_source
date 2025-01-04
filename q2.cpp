#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int missingnumber(int arr[],int n){
  int m=n+1; //actual size is greater than 1 because 1 number is missing
int total=m*(m+1)/2; //natural no. formula

int s2=0;
    for(int i=0;i<n;i++){
        s2+=arr[i];
    }
     cout<<total-s2;
}


int main (){



int arr[]={1,2,3,5,6};

int n=sizeof(arr)/sizeof(arr[0]);

int count=0;

missingnumber(arr,n);

// for(int i=0;i<count;i++){
// count++;
// cout<<count;
// }




}