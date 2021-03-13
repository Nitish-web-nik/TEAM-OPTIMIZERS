#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, i,j, sum1 = 0, sum2 = 0;
    cin>>n;
    int arr[n][n];
    for( i = 0 ; i < n ; i++)
    {
        for( j = 0 ; j < n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    for( i = 0 ; i < n ; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                sum1 = sum1 + arr[i][j];
            }
            if(i == n - j - 1)
            {
                sum2 = sum2 + arr[j][i];
            }
        }
    }

    int max = abs(sum1 - sum2);
    cout<<max;

}
