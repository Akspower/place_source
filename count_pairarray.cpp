#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int getPairsCount(int arr[],int n,int K){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==K)
            count++;
        }
    }
    cout<<"total pair in array  "<<count;
}
int main (){


 int arr[] = { 1, 5, 7, -1,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int K = 6;
    getPairsCount(arr, n, K);
    return 0;






}