#include <bits/stdc++.h>
using namespace std;

int firstOccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstOccur(arr, n, i + 1, key);
}

int lastOccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int occurence = lastOccur(arr, n, i + 1, key);
    if (occurence != -1)
    {
        return occurence;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 2, 5, 42, 6, 7, 9, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    cout << firstOccur(arr, n, 0, key) << endl;
    cout << lastOccur(arr, n, 0, key) << endl;
    return 0;
}