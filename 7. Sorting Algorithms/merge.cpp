#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    // find length of smaller arrays

    int n1 = mid - l + 1;
    int n2 = r - mid;

    // create smaller arrays
    int arr1[n1];
    int arr2[n2];

    // fill smaller arrays with respective values

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[mid + 1 + i];
    }

    // merge into bigger array again

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        // divide the arrays into smaller arrays
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        // merge the arrays
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0;

    mergeSort(arr, 0, n - 1);
    // print list
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}