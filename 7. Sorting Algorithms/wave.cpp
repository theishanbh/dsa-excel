#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 7, 5, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 1 3 4 7 5 6 2
    // 3 1 4 7 5 6 2
    // 3 1 7 4 5 6 2
    // 3 1 7 4 6 5 2
    // 3 1 7 4 6 2 5

    // if number not bigger increment index by 2
    for (int i = 1; i < n - 1; i += 2)
    {
        // check if prev number lesser
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        // check if next number bigger switch
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // print list
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}