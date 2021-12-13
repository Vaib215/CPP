#include<iostream>
using namespace std;

int main(){
    //Author: VAIB
    cout<<"Rectangle"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Hollow Rectangle"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i==0 || i==4 || j==0 || j==3)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }            
        }
        cout<<endl;
    }
    cout<<"Inverted Half Pyramid"<<endl;
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Rotated Half Pyramid"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j<5-i-1)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
            
            
        }
        cout<<endl;
    }
    cout<<"Half-Pyramid Using numbers."<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"Floyd's Triangle"<<endl;
    int k=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    cout<<"Butterfly Pattern"<<endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        for (int j = 2*4-2*i; j > 0; j--)
        {
            cout<<"  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        for (int j = 2*4-2*i; j > 0; j--)
        {
            cout<<"  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    cout<<"Inverted Number Pattern"<<endl;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"0-1 Triangle"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }
    cout<<"Rhombus"<<endl;
    for (int i = 5; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < 5; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Number Pattern"<<endl;
    for (int i =1; i <= 5; i++)
    {
        int k=1;
        for (int j = 1; j <= 5-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Palindrome Pattern"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout<<"  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout<<j<<" ";
        }
        
        cout<<endl;
        
    }
    
return 0;
}