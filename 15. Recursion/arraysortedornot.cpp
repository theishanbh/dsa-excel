#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1 or n == 0)
    {
        return true;
    }
    return ((arr[0] < arr[1]) && sorted(arr + 1, n - 1));
}

int main()
{
    int arr[] = {1, 2, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (sorted(arr, n))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}