#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //Author: VAIB
    int n,i;
    cout<<"Enter a number to check if it's prime or not: ";
    cin>>n;
    for ( i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"Non-";
            break;
        }
        
    }
    cout<<"Prime\n";
    
    
return 0;
}