#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 12, 4, 1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // XOR all numbers
    int xor_sum = 0;
    for (int j = 0; j < n; j++)
    {
        // XOR of two unique numbers remain
        xor_sum = xor_sum ^ arr[j];
    }

    // find the rightmost bit that has value 1 in the xor_sum
    int xor_two = xor_sum;
    int pos = 0;
    while (xor_two & 1 != 1)
    {
        xor_two = xor_two >> 1;
        pos += 1;
    }

    // XOR all the numbers in array that have 1 as bit at the same place
    int tempXorSum = xor_sum;

    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], pos) == true)
        {
            tempXorSum = tempXorSum ^ arr[i];
        }
    }

    cout << "The two numbers are : " << tempXorSum << " , " << (xor_sum ^ tempXorSum) << endl;

    return 0;
}