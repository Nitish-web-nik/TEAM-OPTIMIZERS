#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j]=arr[i]
            }
        }
    }
    cout<<"The sorted array is ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
