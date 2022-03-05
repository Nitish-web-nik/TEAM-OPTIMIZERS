//Reverse a number
#include<iostream>
using namespace std;
int main()
{
    int n, c,r,sum = 0;
    cout<<"Enter the number to check whether it is Armstrong or not ";
    cin>>n;
    c=n;
    while(n>0)
    {
        r = n%10;
        sum = sum + r*r*r;
        n/=10;
    }
    if(sum == c)
        cout<<"The number is an Armstrong number";
    else
        cout<<"This isn't an Armstrong number ";
    return 0;
}
