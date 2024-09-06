#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int ratfood(vector<int>arr,int r,int unit,int n){
    int total=0;
    int require=r*unit;
    for(int i=0;i<n;i++){
        total+=arr[i];
        if(require<=total){
            return i+1;

        }
   
    }
        return -1;
}





pair<int,int>  vehicle(int totalvehicle,int totalwheel){

int fourwheeler=(totalwheel-2*totalvehicle)/2;
int twowheeler=totalvehicle-fourwheeler;

return make_pair(twowheeler,fourwheeler);

}


int main (){


int r=10;
int unit=2;
vector<int>arr{2,8,3,5,7,4,1,2};
int n=8;
cout<<"index ";
cout<<ratfood(arr,r,unit,n);







cout<<endl;
cout<<"vehicle"<<endl;

int totalvehicle=200;
int totalwheel=540;

pair<int,int> result =vehicle(totalvehicle,totalwheel);
cout<<result.first<<endl;
cout<<result.second<<endl;




}