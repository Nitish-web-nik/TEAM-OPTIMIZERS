#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[3], B[3],i, count_a = 0,count_b = 0;
    for(i = 0; i < 3; i++)
    {
        cin>>A[i];
    }
    for(i = 0; i < 3; i++)
    {
        cin>>B[i];
    }
    for(i = 0; i < 3; i++)
    {
        if(A[i] > B[i])
        {
            count_a++;
        }
        else if(A[i] < B [i])
        {
            count_b++;
        }
        else
        {
        }
    }
    cout<<count_a;
    cout<<count_b;
    return 0;
}
