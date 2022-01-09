/*
Program to swap the alternate numbers in the array.
Input: 1 2 3 4 5
Output: 2 1 4 3 5
*/

#include <iostream>
using namespace std;

// Function to swap the numbers alternatively
void alternateSwap(int arr[], int n)
{
    int p1 = 0;
    int p2 = 1;

    while (p1 < n && p2 < n)
    {
        int temp = arr[p1];
        arr[p1] = arr[p2];
        arr[p2] = temp;
        p1 = p2 + 1;
        p2 = p1 + 1;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    alternateSwap(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
