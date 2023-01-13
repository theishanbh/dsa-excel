#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = 0;

    // maintain a variable curr_sum as soon as it becomes negative change it to zero
    int curr_sum = 0;

    // keep updating max_sum at each iteration

    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
        max_sum = max(max_sum, curr_sum);
    }

    cout << "Max sum : " << max_sum << endl;

    return 0;
}