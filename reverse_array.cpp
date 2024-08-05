#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void reversearray(int Arr[],int len){
    for(int i=0;i<len/2;i++){
       // swap(Arr[i],Arr[len-i-1]);
       int temp=Arr[i];
    Arr[i]=Arr[len-i-1];
    Arr[len-i-1]=temp;
    }

    

    for(int i=0;i<len;i++){
        cout<<Arr[i] <<" ";
    }

}
int main (){
    

   int  Arr[]={1,2,3,4,5,6,7};
   int len=sizeof(Arr)/sizeof(Arr[0]);

   reversearray(Arr,len);
   
}