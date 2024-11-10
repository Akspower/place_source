#include<iostream>
#include<vector>
#include<limits.h>
#include<bits/stdc++.h>
using namespace std;

// if all element of array 2 present in array1 then array 2 is subset of array1


void issubset(int arr1[],int m,int arr2[],int n){
    unordered_set<int> s;
    for (int i=0;i<m;i++){
        s.insert(arr1[i]);
    }
  int  total_element=s.size();  //size store only unique element

   for (int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
if(total_element==s.size()){
    cout<<"array 2 is subset of array 1 ";
    }
else{
    cout<<"not a subset";
    
}
  


}

int main (){

int arr1[]={1,2,34,5,67,8};
int arr2[]={2,5,8,5};
int m=sizeof(arr1)/sizeof(arr1[0]);
int n=sizeof(arr2)/sizeof(arr2[0]);
  

issubset(arr1,m,arr2,n);
   







}