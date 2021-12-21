#include<iostream>
using namespace std;
int fact(int n){
    if (n==1||n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    
}
int main(){
    //Author: VAIB
    int n,r; cin>>n>>r;
    cout<<fact(n)/(fact(n-r)*fact(r))<<endl;
return 0;
}