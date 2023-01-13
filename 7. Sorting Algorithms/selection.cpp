#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int curr_ind = i;
        int curr_low = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (curr_low > arr[j])
            {
                curr_low = arr[j];
                curr_ind = j;
            }
        }
        arr[curr_ind] = arr[i];
        arr[i] = curr_low;
    }

    // print list
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}