#include<iostream>
using namespace std;
int clearBit(int n,int pos)
{
 int mask=~(1<<pos);
  return n& mask;
}
  int main(){
  int n,pos;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    int x=clearBit(n,pos);
    cout<<x;
 return 0; 
}
