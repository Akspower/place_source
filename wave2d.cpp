#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int wave(int arr[][4],int row,int col){
for(int j=0;j<col;j++){
    if(j%2==0){
        for(int i=0;i<row;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    else{
         for(int i=row-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

}


int main (){


int arr[][4]={{1,2,3,4},{11,22,33,44},{5,6,7,8}};

wave(arr,3,4);




}