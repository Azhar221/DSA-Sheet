#include <iostream>
using namespace std;

// Swap Function.
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Move All Negative Numbers To Beginning And Positive To End Function.

void Move_All_Negative_Numbers_To_Beginning_And_Positive_To_End(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }
}
// Print the Array Function
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Element of the Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Move_All_Negative_Numbers_To_Beginning_And_Positive_To_End(arr, n);
    displayArray(arr, n);
    return 0;
}
