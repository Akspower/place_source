#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nearestinteger(int num , int d){
int r=num%d;
if(r<(d+1)/2){  //smaller
    return num-r;
}
return num+(d-r);

}

int main(){
    cout<<"enter num "<<endl;
    int num,d;
    cin>>num;
    cout<<"enter divisor"<<endl;
    cin>>d;
    cout<<nearestinteger(num,d);

}