#include<iostream>
using namespace std;
int main()
{
    int n,i,j,mini,temp;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i = 0;i<n-1;i++)
    {
        mini = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
            }
        }
            temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
    }
    cout<<"The sorted array is ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
