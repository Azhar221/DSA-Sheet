#include<iostream>
using namespace std;

int linear_search(int *arr,int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k) return i;
    }
    return -1;
}

int main()
{
    int n,i,k;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search:";
    cin>>k;
    int res=linear_search(arr,n,k);
    if(res!=-1) cout<<"Element is found and present at "<<res+1<<" positon";
    else cout<<"Element not found!";
}