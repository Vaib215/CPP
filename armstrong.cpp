#include <iostream>
using namespace std;
int digits(int a)
{
    int sum = 0;
    while (a > 0)
    {
        a /= 10;
        sum++;
    }
    return sum;
}
int power(int a, int b)
{
    int pow = 1;
    for (int i = 0; i < b; i++)
    {
        pow *= a;
    }
    return pow;
}
int main()
{
    //Author: VAIB
    int n;
    cin >> n;
    int dig = digits(n), sum = 0,org=n;
    for (int i = 0; i < dig; i++)
    {
        while (n > 0)
        {
            sum+=power(n%10,dig);
            n/=10;
        }
    }
    if(sum!=org){
        cout<<"not ";
    }
    cout<<"an armstrong number.\n";
    return 0;
}