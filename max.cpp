#include<iostream>
using namespace std;

int main(){
    //Author: VAIB
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" is max\n";
        }
        else
        {
            cout<<c<<" is max\n";
        }  
    }
    else
    {
        if (b>c)
        {
            cout<<b<<" is max\n";
        }
        else
        {
            cout<<c<<" is max\n";
        }  
    }
    
return 0;
}