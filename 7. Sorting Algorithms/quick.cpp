#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r)
{
    // init i = l-1, j=l
    int i = l - 1;
    int j = l;

    // iterate over j till r
    // if j is less than arr[r], then swap arr[i] and arr[j]
    while (j < r)
    {
        if (arr[j] < arr[r])
        {
            i += 1;
            swap(arr[i], arr[j]);
        }
        j += 1;
    }

    // swap pivot and place between both the arrays
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);

        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int main()
{

    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    // print list
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}