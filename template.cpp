#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int ratfood(vector<int>arr,int r,int unit,int n){
    int total=0;
    int require=r*unit;
    for(int i=0;i<n;i++){
        total+=arr[i];
        if(require<=total){
            return i+1;

        }
   
    }
        return -1;
}


int main (){


int r=10;
int unit=2;
vector<int>arr{2,8,3,5,7,4,1,2};
int n=8;

cout<<ratfood(arr,r,unit,n);






}