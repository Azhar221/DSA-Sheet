/*
K-th Element of Two Sorted Arrays

Given two sorted arrays arr1 and arr2 of size N and M respectively and an 
element K. The task is to find the element that would be at the k’th position 
of the final sorted array.

Example 1:

Input:
arr1[] = {2, 3, 6, 7, 9}
arr2[] = {1, 4, 8, 10}
k = 5
Output:
6
Explanation:
The final sorted array would be -
1, 2, 3, 4, 6, 7, 8, 9, 10
The 5th element of this array is 6.
Example 2:
Input:
arr1[] = {100, 112, 256, 349, 770}
arr2[] = {72, 86, 113, 119, 265, 445, 892}
k = 7
Output:
256
Explanation:
Final sorted array is - 72, 86, 100, 112,
113, 119, 256, 265, 349, 445, 770, 892
7th element of this array is 256.

Your Task:  
You don't need to read input or print anything. Your task is to complete 
the function kthElement() which takes the arrays arr1[], arr2[], its 
size N and M respectively and an integer K as inputs and returns the 
element at the Kth position.


Expected Time Complexity: O(Log(N) + Log(M))
Expected Auxiliary Space: O(Log (N))


Constraints:
1 <= N, M <= 106
1 <= arr1i, arr2i < INT_MAX
1 <= K <= N+M
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int kth(int *arr1, int *arr2, int *end1, int *end2, int k){
        if(arr1 == end1)return arr2[k];
        if(arr2 == end2)return arr1[k];
        int mid1 = (end1-arr1)/2;
        int mid2 = (end2-arr2)/2;
        if(mid1+mid2 < k){
            if(arr1[mid1]>arr2[mid2])return kth(arr1, arr2+mid2+1, end1, end2, k-mid2-1);
            else return kth(arr1+mid1+1, arr2, end1, end2, k-mid1-1);
        }
        else{
            if(arr1[mid1]>arr2[mid2])return kth(arr1, arr2, arr1+mid1, end2, k);
            else return kth(arr1, arr2, end1, arr2+mid2, k);
        }
    }
    int kthElement(int arr1[], int arr2[], int n, int m, int k){
        return kth(arr1, arr2, arr1+n, arr2+m, k-1);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        int arr1[n], arr2[m];
        for(int i = 0;i<n;i++)cin>>arr1[i];
        for(int i = 0;i<m;i++)cin>>arr2[i];
        Solution ob;
        cout<<ob.kthElement(arr1, arr2, n, m, k)<<endl;
    }
    return 0;
}