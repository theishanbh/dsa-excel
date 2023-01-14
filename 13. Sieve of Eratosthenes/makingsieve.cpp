#include <bits/stdc++.h>
using namespace std;

int main()
{
    // our sieve will be of size 50
    int n = 50;
    int prime[100] = {0};
    for (int j = 2; j <= n; j++)
    {
        for (int i = j * j; i <= n; i += j)
        {
            prime[i] = 1;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}