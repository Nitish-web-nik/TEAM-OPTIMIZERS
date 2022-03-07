#include<iostream>
using namespace std;
int main()
{
    int arr[5]={4,8,11,13,17}, mid = 2,key,flag;
    cin>>key;
    for(int i = 0;i<5;i++)
    {
        if(arr[mid]==key)
        {
            cout<<"The key is present at index "<<mid;
            flag = 0;
            break;
        }
        else
            mid /= 2;
    }
    if(flag != 0)
    {
        cout<<"Element is not present ";
    }
    return 0;
}
