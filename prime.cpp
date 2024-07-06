// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
bool prime=true;
 
 int n;
 cout<<"enter number to check"<<endl;
 cin>>n;
 if(n==0 || n==1){
    prime=false;
 }
 for(int i=2;i<n/2;i++){
    if(n%i==0){
        prime=false;
    }
    
 }
 cout<<prime;
}