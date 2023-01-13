#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    int row_start = 0, row_end = 4, col_start = 0, col_end = 4;

    while (row_start <= row_end && col_start <= col_end)
    {
        // TODO: top-row traversal
        for (int i = col_start; i <= col_end; i++)
        {
            cout << arr[row_start][i] << " ";
        }

        row_start += 1;

        // TODO: right-col traversal
        for (int i = row_start; i <= row_end; i++)
        {
            cout << arr[i][col_end] << " ";
        }
        col_end -= 1;

        // TODO: bottom-row traversal
        for (int i = col_end; i >= col_start; i--)
        {
            cout << arr[row_end][i] << " ";
        }

        row_end -= 1;

        // TODO: left-col traversal
        for (int i = row_end; i >= row_start; i--)
        {
            cout << arr[i][col_start] << " ";
        }
        col_start += 1;
    }

    cout << endl;

    return 0;
}