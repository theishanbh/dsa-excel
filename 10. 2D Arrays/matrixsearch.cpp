#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int arr[4][4] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};

    int r = 0, c = 3;
    int key = 5;
    while (r < n && c > -1)
    {
        if (arr[r][c] == key)
        {
            break;
        }
        else if (arr[r][c] > key)
        {
            c -= 1;
        }
        else
        {
            r += 1;
        }
    }

    if (arr[r][c] == key)
    {
        cout << r << " , " << c << endl;
    }
    else
    {
        cout << "No match found" << endl;
    }

    return 0;
}