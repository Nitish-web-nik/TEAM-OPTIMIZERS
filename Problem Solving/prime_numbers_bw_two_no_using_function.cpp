#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int x)
{
    for(int j = 2;j<=sqrt(x);j++)
    {
        if(x%j==0)
            return false;
    }
        return true;
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers to find prime b/w them(smaller then larger) ";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
