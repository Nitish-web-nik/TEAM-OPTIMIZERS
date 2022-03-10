#include<iostream>
using namespace std;
int flag =0;
int binary_s(int arr[],int i,int j,int key)
{
    int mid;
    if(j>=i)
    {
        mid = (i+j)/2;

        if(arr[mid]==key)
        {
            flag = 1;
            return mid;
        }
        else if(arr[mid]>key)
        {
            return binary_s(arr,i,mid-1,key);
        }
        else
        {
            return binary_s(arr,mid+1,j,key);
        }
    }
}
int main()
{
    int arr[20],n,mid,key;
    cout<<"Enter the size of the array ";
    cin>>n;
    cout<<"Enter the elements of the array in ascending order "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to search in the sorted array ";
    cin>>key;
    int res = binary_s(arr,0,n-1,key);
    if(flag!=0)
    {
        cout<<"The "<<key<<" is present at the index "<<res;
    }
    else
        cout<<"The element is not present in the array ";
    return 0;
}
