#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class complex{
int real,img;

complex(){

}

public:
complex(int real,int img){
    this->real=real;
    this->img=img;
}
void Display(){
    cout<<real<< "+"<<img<<"i";
}
complex operator+(complex &c){
    complex ans;    //commplex constructor needed
    ans.real=real+c.real;
    ans.img=img+c.img;
    return ans;
}
};


int main (){

complex c1(3,4);
complex c2(5,2);

complex c3=c1+c2;  //even  we change the + to - and also change complex operator-(complex &c) then also it perform addition 
c3.Display();







}