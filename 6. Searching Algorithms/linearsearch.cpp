#include <bits/stdc++.h>
using namespace std;

int main()
{
    // TODO: implement linear search
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 13;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "Key not found";
    }
    else
    {
        cout << "Key found at index: " << index;
    }

    return 0;
}