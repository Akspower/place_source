#include<bits/stdc++.h>
#include<vector>
#include<limits.h>
using namespace std;

void leftrotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}


int main (){

int n;
cout<<"enter element count"<<endl;
cin>>n;
int arr[n];
cout<<"enter element"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int d; //how many left rotate
cout<<"how many shift left"<<endl;
cin>>d;
leftrotate(arr,n,d);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}







}