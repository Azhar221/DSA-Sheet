#include <bits/stdc++.h>
using namespace std;
 
int equilibrium(int *arr, int n)
{
    int sum = 0; //Initialize sum of whole array
    int leftsum = 0; //Initialize leftsum
 
   
    for (int i = 0; i < n; ++i)
        sum += arr[i]; //Finding total Sum
 
    for (int i = 0; i < n; ++i) 
    {
        sum -= arr[i]; // This is right Sum now
 
        if (leftsum == sum)
            return i;
 
        leftsum += arr[i];
    }
 
    //Returning -1 if no equilibrium Index found
    return -1;
}

int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int c = equilibrium(arr,arr_size);
    if(c==-1)
    cout<<"No Equilibrium index found"<<endl;
    else
    cout<<"Equilibrium Index is "<<c<<endl;
}