#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    for (int i = 0; i < n - 2; i++)
    {
        int maxNum = 0;
        for (int j = i; j < i + 3; j++)
        {
            maxNum = max(maxNum, arr[j]);
        }
        cout << maxNum << " ";
    }
    cout << endl;

    return 0;
}