#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void sortarray(int arr[],int n){
    int low=0,mid=0,high=n-1;
while(mid<=high){    //mid will traverse in array
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        mid++;
        low++;
    }
    else if (arr[mid]==1){
        mid++;
    }
    else{  //arr[mid]==2
        swap(arr[mid],arr[high]);
        high--;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}


int main (){


int arr[]={1,2,0,0,2,0,1};
int n=sizeof(arr)/sizeof(arr[0]);

sortarray(arr,n);






}