#include<iostream>
using namespace std;
int dec_to_bin(int number);
int main()
{
    int number;
    cout<<"Enter the decimal number to convert it into binary ";
    cin>>number;
    cout<<"The Binary value is "<<dec_to_bin(number);
    return 0;
}
int dec_to_bin(int number)
{
    int rem, sum=0,i=1;
    while(number!=0)
    {
        rem = number%2;
        number/=2;
        sum = sum + rem *i;
        i=i*10;
    }
    return sum;
}
