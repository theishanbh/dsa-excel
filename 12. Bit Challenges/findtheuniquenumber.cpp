#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 12, 4, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // TODO: XOR all numbers in the array
    int xorsum = 0;
    for (int j = 0; j < n; j++)
    {
        xorsum = xorsum ^ arr[j];
    }
    cout << "unique number " << xorsum << endl;

    return 0;
}