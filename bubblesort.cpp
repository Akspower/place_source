#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}


int main (){

int arr[]={11,4,50,2,9};
int n=5;

bubblesort(arr,n);






}