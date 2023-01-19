#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 5, 6, 1, 7, 8};
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int target = 6;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < n; i++)
    {
        int temp = target - arr[i];
        j = i + 1;
        k = n - 1;
        while (arr[j] + arr[k] != temp && j <= k)
        {
            if (arr[j] + arr[k] < temp)
            {
                j += 1;
            }
            else
            {
                k -= 1;
            }
        }
        if (arr[j] + arr[k] == temp)
        {
            break;
        }
    }
    cout << arr[i] << " , " << arr[j] << " , " << arr[k] << endl;
}