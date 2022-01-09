/*
 Program to reverse the given array
*/
#include <iostream>
using namespace std;

// function to reverse the array
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, n);

    cout << "Array after reversing: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}