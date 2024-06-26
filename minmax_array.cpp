#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findminmax(int arr[],int n){
    int i,min,max;
    if(n%2==0){
        if(arr[0]>arr[1]){
            max=arr[0];
            min=arr[1];
            //comment
            
        }
    else {
        max=arr[1];
        min=arr[0];
        i=2;
    }
    }
    else{
        min=arr[0];
        max=arr[0];
        i=1;
    }

while(i<n-1){
    if(arr[i]>arr[i+1]){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i+1]<min){
            min=arr[i+1];
        }
     }
    else{
         if(arr[i+1]>max){
            max=arr[i+1];
        }
        if(arr[i]<min){
            min=arr[i];
        }
   }
   i+=2;
}
cout<<"minimum "<<min<<"\n maximum "<<max<<endl;
}


int main (){

cout<<"enter array element"<<endl;
int n=5;
int arr[n];
for(int i=0;i<5;i++){
    cin>>arr[i];
}

findminmax(arr,n);
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }







}