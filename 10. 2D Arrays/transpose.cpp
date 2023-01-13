#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int arr[n][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // print new 2d array

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}

// 123 - 3
// 456 - 2
// 789 - 1

// 1234 - 3
// 4567 - 2
// 8912 - 1
// 3456 - 0