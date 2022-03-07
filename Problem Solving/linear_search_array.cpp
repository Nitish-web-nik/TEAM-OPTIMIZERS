#include<iostream>
using namespace std;
int main()
{
    int n,arr[10],key,flag;
    cout<<"Enter the size of the array ";
    cin>>n;
    cout<<"Enter the elements of the array in ascending order "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to check whether it is present in the array or not ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<key<<" is present at the index "<<i;
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<key<<" is not present in the given Array"<<endl;
    }

    return 0;
}
