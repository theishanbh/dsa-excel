#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 1; i < n; i++)
    {
        int temp_ind = i - 1;
        int temp_number = arr[i];
        while (arr[temp_ind] > temp_number && temp_ind >= 0)
        {
            arr[temp_ind + 1] = arr[temp_ind];
            temp_ind -= 1;
        }
        arr[temp_ind + 1] = temp_number;
    }
    // print list
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}