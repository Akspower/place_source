
#include <bits/stdc++.h>
using namespace std;

void shiftnegative(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<0){
                swap(arr[i],arr[j]);
            }
        }
    }
     for(int k=0;k<n;k++){
        cout<<arr[k] <<" ";
    }
}

int main() {
    
   int arr[]={-1,2,5,-6,9};
    int n=5;
    shiftnegative(arr,n);
    
    return 0;
}