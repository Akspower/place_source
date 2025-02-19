#include <iostream>
using namespace std;

int i=10;
class s{
  //  public:
    int id;
    public:
void set(int a){
    id=a;
}
void get(){
    cout<<id;
}
s(int i){
int s=i;
}
};


int main()
{
    
s ss;
// ss.id=5;
ss.set(7);
ss.get();
   static int j;

    cout<<i<<endl<<j<<endl;
}
