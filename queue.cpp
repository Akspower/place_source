#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main (){


// queue<int>q;

// q.push(10);
// q.push(20);
// q.push(30);
// q.push(40);


// q.pop();

// int n=q.size();
// while(n--){
// cout<<q.front()<<" ";
// q.push(q.front());
// q.pop();

// }
// cout<<q.size()<<endl;


cout<<"reverse queue"<<endl;

queue<int> q1;
stack<int>s;

q1.push(1);
q1.push(2);
q1.push(3);
q1.push(4);
q1.push(5);

while(!q1.empty()){
    int element=q1.front();
    q1.pop();

    s.push(element);
} 

while(!s.empty()){
    int ele=s.top();
    s.pop();

    q1.push(ele);
}
while(!q1.empty()){
cout<<q1.front()<<" ";
q1.pop();
cout<<endl;
}
}