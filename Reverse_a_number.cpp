#include<iostream>
using namespace std;

int main(){
    //Author: VAIB
    int tmp=0;
    int n; cin>>n;
    while (n>0)
    {
        int ld=(n%10);
        n=n/10;
        tmp=tmp*10+ld;
    }
    cout<<tmp<<endl;
return 0;
}