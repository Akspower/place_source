#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findunique(vector<int> arr,int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main (){
int n=5;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin >> arr[i];
}
int uniqueElement=findunique(arr,n);


cout<<"unique element is "<<uniqueElement<<endl;




}