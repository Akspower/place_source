#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class en{
private:
int x;

public:
int set(int a){
    x=a;
}

int get(){
    return x;
}
};


int main (){

en e;

e.set(5);

cout<<e.get();







}