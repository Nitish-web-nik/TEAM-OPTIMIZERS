#include<iostream>
using namespace std;
int main()
{
    int arr[10],n;
    cout<<"Enter the size of the array ";
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of the array is ";
    for(int j = 0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    int maxi = arr[0];
    for(int m = 1;m<n;m++)
        if(maxi < arr[m])
        {
            maxi = arr[m];
        }
    cout<<endl;
    cout<<"The max element of the array is "<<maxi;

    int mini = arr[0];
    for(int m = 1;m<n;m++)
        if(mini > arr[m])
        {
            mini = arr[m];
        }
    cout<<endl;
    cout<<"The min element of the array is "<<mini;

    return 0;
}
