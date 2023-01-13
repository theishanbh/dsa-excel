#include <bits/stdc++.h>
using namespace std;

int main()
{
    // array A
    int n1 = 2, n2 = 3;
    int arr1[n1][n2] = {
        {1, 2, 3},
        {4, 5, 6}};
    // Array B
    int m1 = 3, m2 = 3;
    int arr2[m1][m2] = {
        {10, 11, 12},
        {20, 21, 22},
        {30, 31, 32}};
    // Array C - answer array
    int answer[n1][m2] = {0};
    // n2 == m1 => should be true

    // for outer loop => n1

    for (int i = 0; i < n1; i++)
    {
        // for inner loop => m2
        for (int j = 0; j < m2; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                // VERY VERY IMPORTANT
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // print loop

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}