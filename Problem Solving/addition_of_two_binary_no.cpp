#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n1,i,j, n2,a[20],b[20],sum1=0,sum2=0, overall_sum =0;
    cout<<"Enter the two binary no's to add ";
    cin>>n1>>n2;
    for(i = 0;n1>0;i++)
    {
        a[i]=n1%10;
        n1/=10;
    }
    for(i=i-1;i>=0;i--)
    {
        sum1 = sum1 + a[i]*pow(2,i);
    }


    for(j = 0;n2>0;j++)
    {
        a[j]=n2%10;
        n2/=10;
    }
    for(j=j-1;j>=0;j--)
    {
        sum2 = sum2 + a[j]*pow(2,j);
    }
    overall_sum = sum1 + sum2;
    cout<<"The sum of two binary number is "<<overall_sum;

    return 0;
}
