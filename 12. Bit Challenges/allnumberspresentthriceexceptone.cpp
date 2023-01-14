#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int main()
{
    int arr[] = {1, 2, 3, 1, 4, 2, 3, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int bitsArr[32] = {0};

    // fill bitsArr
    // unwanted elements will be present in multiples of 3
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int pos = 0;
        while (temp)
        {
            if (getBit(arr[i], pos) == true)
            {
                bitsArr[pos] += 1;
            }
            temp = temp >> 1;
            pos += 1;
        }
    }

    // modulo whole array by 3

    for (int i = 0; i < 32; i++)
    {
        bitsArr[i] = bitsArr[i] % 3;
    }
    int num = 0;
    int two = 1;
    for (int i = 0; i < 32; i++)
    {
        num += bitsArr[i] * two;
        two *= 2;
    }

    cout << "The unique number is : " << num << endl;

    return 0;
}