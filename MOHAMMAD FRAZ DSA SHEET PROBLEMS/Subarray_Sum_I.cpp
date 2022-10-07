#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int findAllSubarraysWithGivenSum(vector < int > & arr, int s) {
    unordered_map<int, int> m;
    int psum = 0;
    int ans = 0;
    m[0] = 1;
    for(int i=0; i<arr.size(); i++){
        psum += arr[i];
        if(m.find(psum-s) != m.end()){
            ans += m[psum-s];
        }
        m[psum]++;
    }
    return ans;
}

int main()
{
    int n,s;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    cout<<"Enter the sum you want to search: ";
    cin>>s;
    vector<int> arr;
    int a;
    cout<<"Enter the element of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    int ans = findAllSubarraysWithGivenSum(arr, s);
    cout<<"Number of subarrys that sums up to " << s << " is "<< ans << endl;
}