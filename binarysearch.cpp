#include<bits/stdc++.h>


using namespace std;


int binary(int arr[],int key,int end,int  s){

while(s<=end){
    int mid=s+(end-s)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    else {
        s=mid+1;
     }
}
return -1;
}

int main(){

int arr[]={1,5,8,9,11,466};
int key  =1;
int n=sizeof(arr)/sizeof(arr[0])-1;

int s=0;
cout<<binary(arr,key,n,s);


}