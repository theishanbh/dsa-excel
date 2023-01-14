#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 11;
    // keep BIT ANDING n and n-1
    int one_counter = 0;
    while (n)
    {
        n = n & (n - 1);
        one_counter += 1;
    }
    cout << one_counter << endl;
    return 0;
}