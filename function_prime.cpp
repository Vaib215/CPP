#include<iostream>
using namespace std;
void prime(int a,int b){
    int i;
    for (int num = a; num <= b; num++)
    {
        
        for (i = 2; i < num; i++)
        {
            if (num%i==0)
            {
                break;
            }
            
        }
        if (num==i)
        {
            cout<<i<<endl;
        }
        
    }
}
int main(){
    //Author: VAIB
    int a,b; cin>>a>>b;
    prime(a,b);
return 0;
}