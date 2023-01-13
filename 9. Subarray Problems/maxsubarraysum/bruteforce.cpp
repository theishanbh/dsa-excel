#include <bits/stdc++.h>
using namespace std;

// This is a brute force approach to find the maximum subarray sum.
// Time complexity: O(n^2)

int main()
{
    // max subarray sum - brute force
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            max_sum = max(max_sum, curr_sum);
        }
    }
    return 0;
}