#include<iostream>
using namespace std;
static int  count;

void print(int no_row){
    int num=1;
    
    for(int i=1;i<=no_row;i++){
        for(int j=1;j<=no_row+i-1;j++){
            if(j<=no_row-i){
            cout<<" ";
            }
            else{
                 cout<<num;
                num++;
            }
           cout<<endl;
        }
         
        count++;
        
    }
    
}

int main(){


    // int num=0,person=0;
    // while(1)
    // {
    //   cin>>person;
    //   if(person==1){
    //     num++;
        
    //    }
    //    else{
    //     num--;
    //    }
    //    cout<<num;
    // }

   // cout<<i;

   int row = 0;
   char input =0;

  // do
  while(1)
   {
     cout<<"Enter no of rows"<<endl;
     cin>>row;
    print(row);
      cout<<"Do you want to continue "<<endl<<"Enter Y for yes"<<endl;
      cin>>input;
      //if((input != 'Y') || (input!='y'))
      if(input != 'Y')
      {
        // cout<<"In if condition"<<endl;
        break;
      }
   }
   cout<<count<<endl;
   //while(input == 'Y' || input=='y');


  
}