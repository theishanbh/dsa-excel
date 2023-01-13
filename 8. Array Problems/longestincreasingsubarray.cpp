#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 5, 1, 2, 3, 4, 5, 9, 10, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = 1;
    int curr_size = arr[1] - arr[0];
    int max_size = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] == curr_size)
        {
            temp += 1;
        }
        else
        {
            max_size = max(max_size, temp);
            temp = 1;
            curr_size = arr[i + 1] - arr[i];
        }
        cout << temp << endl;
    }

    max_size += 1;

    cout << "Max size: " << max_size << endl;

    return 0;
}