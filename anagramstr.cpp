#include<bits/stdc++.h>

using namespace std;

bool isanagram(string s1,string s2){
    if(s1.length()!=s2.length())
    return false;

    unordered_map<char,int> map;
    for(int i=0;i<s1.length();i++){
        map[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        if(map.find(s2[i])!=map.end()){
            map[s2[i]]--;
        }
        else{
            return false;
        }
    }
    for(auto i:map){
        if(i.second !=0){
            return false;
        }
        return true;
    }
}

//driver


int main (){

string s1="silent";
string s2="listen";

cout<<isanagram(s1,s2);




 int a = 5, b = 10;

    cout << "max :" << (((a + b) + abs(a - b)) / 2) << endl;
    cout << "min :" << (((a + b) - abs(a - b)) / 2) << endl;




}