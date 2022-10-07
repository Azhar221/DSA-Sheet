#include<bits/stdc++.h>
using namespace std;

void Iterative_Reverse(int a[], int n)
{
    int left=0,right=n-1;
    while(left<right)
      swap(a[left++],a[right--]);
}

void Recursive_Reverse(int a[],int left, int right)
{
    if(left>=right)
     return;
    else
     swap(a[left],a[right]);
    Recursive_Reverse(a,left+1,right-1);  
}

int main()
{
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the Elements of Array : ";
    for(int i=0;i<n;i++)
     cin>>a[i];
    cout<<"\n";
    // Iterative_Reverse(a,n);
     
    Recursive_Reverse(a,0,n-1);
    for(int i=0;i<n;i++)
     cout<< a[i]<<" ";

    
 return 0;
}