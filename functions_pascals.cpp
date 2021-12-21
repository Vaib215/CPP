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
int bin_coeff(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main(){
    //Author: VAIB
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<bin_coeff(i,j)<<" ";
        }
        cout<<endl;
    }
    
return 0;
}