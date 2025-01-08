#include<iostream>
#include<vector>
using namespace std;
void print(int* z,int n){
    for(int i=n-1;i>=0;i--){
        cout<<z[i]<<endl;
    }
}
int main(){
vector <int> a;
 
 a.push_back(0);
 a.push_back(1);
 a.push_back(0);
 a.push_back(1);

for(int i=a.size()-1;i>=0;i--){
    // cout<<a[i];
}
// cout<<a.size();

//  for( int i=a.size()-1;i<=0;i--){
//     cout<<a[i];
//  }

int z[]={10,20,30,40,50};
int n=sizeof(z)/sizeof(z[0]);
print(z,n);

}

