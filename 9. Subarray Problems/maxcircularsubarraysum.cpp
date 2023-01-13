#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, -3, -4, 7, 6, 5, -4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // negate arr and find the non wrapping elements

    int negativeArr[n];
    for (int i = 0; i < n; i++)
    {
        negativeArr[i] = -arr[i];
    }

    // find total sum of array
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }

    // now use kadane's algo on negative array
    int curr_sum = 0;
    int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += negativeArr[i];
        if (curr_sum < 0)
            curr_sum = 0;
        max_sum = max(max_sum, curr_sum);
    }

    // subtract (negative of max_sum) from (total_sum)

    int ans = total_sum - (-max_sum);

    cout << "Answer : " << ans << endl;

    return 0;
}