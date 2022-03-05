//Reverse a number
#include<iostream>
using namespace std;
int main()
{
    int n, reverse =0;
    cout<<"Enter the number to reverse ";
    cin>>n;
    while(n>0)
    {
        reverse = reverse * 10 + n%10;
        n/=10;
    }
    cout<<reverse;
    return 0;
}
