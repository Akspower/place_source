#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int sub(int *arr,int size){
int total=0;
int prefix=0;
for(int i=0;i<size;i++){
    total+=arr[i];
}
    for(int j=0;j<size;j++){
        prefix+=arr[j];
        int ans=total-prefix;
if(ans==prefix){
  return  1;

}
    }
  

  return 0;
}


int main (){




int arr[]={1,2,3,4,6,4};
int size=sizeof(arr)/sizeof(arr[0]);

cout<<sub(arr,size);

}