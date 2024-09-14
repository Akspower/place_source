#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(int lower ,int upper, int digit){
    int count=0;
for(int i=lower;i<upper;i++){
    int temp=i;
    while(temp>0){
    if(temp%10==digit){
        count++;
    }
    temp/=10;
}
}
return count;
}

int main(){


    int lower=50;
    int upper=60;
    int digit=5;
    cout<<find(lower,upper,digit);
}