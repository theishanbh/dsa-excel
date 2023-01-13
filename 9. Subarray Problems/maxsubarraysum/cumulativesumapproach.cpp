#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cumulative[n + 1] = {0};

    // fill cumulative array
    for (int i = 0; i < n; i++)
    {
        cumulative[i + 1] = arr[i] + cumulative[i];
    }

    int max_sum = INT_MIN;

    // make for loops so that you can iterate through cumulative
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            max_sum = max(max_sum, (cumulative[j] - cumulative[i]));
        }
    }

    cout << "Max sum : " << max_sum << endl;

    return 0;
}