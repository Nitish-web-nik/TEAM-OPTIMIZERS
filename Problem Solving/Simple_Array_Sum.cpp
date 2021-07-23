#include <bits/stdc++.h>

using namespace std;
int main()
{
    int size, i, sum = 0;
    cin>>size;
    int arr[size];
    for(i = 0; i < size ; i++)
    {
        cin>>arr[i];
    }
    for(i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}

/*Output:-
5
1
2
3
4
5
15
*/
