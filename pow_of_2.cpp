#include<iostream>
using namespace std;
bool pow_of_2(int n){
    if((n&n-1)==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<pow_of_2(n);
    return 0;
}
 
