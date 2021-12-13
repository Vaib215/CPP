#include<iostream>
using namespace std;

int main(){
    //Author: VAIB
    int n,i;
    cout<<"Enter a number to check if it's prime or not: ";
    cin>>n;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"Non-Prime\n";
            break;
        }
        
    }
    if (i==n)
    {
        cout<<"Prime\n";
    }
    
    
return 0;
}