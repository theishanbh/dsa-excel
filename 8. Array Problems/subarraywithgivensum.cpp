#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, d, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // use two pointer approach
    // when sum larger, increment left pointer
    // when sum is less, increment right pointer

    int s = 7; // this is the required sum
    int i = 0, j = 0, sum = 0;
    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            break;
        }
        j++;
    }
    cout << i << " " << j << endl;
    return 1;
}