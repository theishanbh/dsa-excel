#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 4, 0, 0, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 7;

    // TODO: use two pointer approach
    // TODO: when sum larger, increment left pointer
    // TODO: when sum is less, increment right pointer

    int i = 0, j = 0;
    int currSum = arr[0];

    while (j < n)
    {
        if (currSum == target)
        {
            break;
        }
        if (currSum < target)
        {
            j++;
            currSum += arr[j];
        }
        else
        {
            currSum -= arr[i];
            i++;
        }
    }
    if (currSum != target)
    {
        cout << "Not possible";
    }
    else
    {

        cout << i << j << endl;
    }

    return 0;
}