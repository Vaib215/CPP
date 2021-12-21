#include<iostream>
using namespace std;
void fib(int n){
    int t1=0,t2=1,nextTerm;   
    cout<<t1<<endl<<t2<<endl;
    for (int i = 1; i <= n-2; i++)
    {
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
        cout<<nextTerm<<endl;
    }
    return;
}
int main(){
    //Author: VAIB
    int n; cin>>n;
    fib(n);
return 0;
}