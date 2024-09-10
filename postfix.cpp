
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int perform(int operand1,int operand2,char ch){
    if(ch=='+'){
        return operand1+operand2;
    }
     if(ch=='*'){
        return operand1*operand2;
    }
    if(ch='-'){
        return operand1-operand2;
    }
     if(ch='/'){
        return operand1/operand2;
    }
}

int postfix(string express){
    stack <int> s;
    for(int i=0;i<express.length();i++){
        char ch=express[i];
         if (isdigit(ch)) {
         
            s.push(ch - '0');
         }
        else  if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            int operand2=s.top();
            s.pop();
            int operand1=s.top();
            s.pop();
            int result=perform(operand1,operand2,ch);
                s.push(result);
            
        }
         
    }
    return s.top();
}

int main() {

    
   string express;
   getline(cin,express);
   
   int result=postfix(express);
   cout<<result;

    return 0;

    //run on online compiler
}