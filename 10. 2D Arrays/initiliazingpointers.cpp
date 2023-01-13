#include <bits/stdc++.h>
using namespace std;

int main()
{
    // for 1D pointer
    int *p = new int[4];

    // for 2D pointer
    int **pd = new int *[7];

    for (int i = 0; i < 7; ++i)
    {

        pd[i] = new int[10];
        // each i-th pointer is now pointing to dynamic array (size 10)
        // of actual int values
    }

    return 0;
}