#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1, 1, 2, 0, 0, 1, 2, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // write dnf sort

    // init indices low(0,0), mid(1,0), high(2, last)
    int low = 0, mid = 0, high = n - 1;
    while (mid < high)
    {
        // if index mid = 1, mid++
        if (arr[mid] == 1)
        {
            mid += 1;
        }
        // if mid = 0, switch low with mid and increment both
        else if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        // if mid = 2, swithc with high, and decrement high
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    // print list
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}