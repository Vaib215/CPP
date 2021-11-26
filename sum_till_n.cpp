#include<iostream>
using namespace std;

int main(){
    //Author: VAIB
    int n,k=0;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        k+=i;
    }
    cout<<"Sum till "<<n<<" is "<<k<<endl;
return 0;
}