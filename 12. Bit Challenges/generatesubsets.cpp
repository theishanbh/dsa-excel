#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sizeOfSubset = (1 << n);

    int subset[sizeOfSubset];

    // iterate though loop 1 << n times, to generate that many subsets

    for (int i = 0; i < sizeOfSubset; i++)
    {
        // iterate though each numbers3
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}