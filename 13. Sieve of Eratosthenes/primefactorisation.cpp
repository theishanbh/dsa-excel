#include <bits/stdc++.h>
using namespace std;

int main()
{
    // our sieve will be of size 50
    int n = 100;
    int prime[n + 1] = {0};

    // initialize prime with their own respective number
    for (int i = 0; i <= n; i++)
    {
        prime[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        // if arr[i] is prime then, arr[i] = i
        if (prime[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                // if already smallest prime factor stored, dont put again in array
                if (prime[j] == j)
                {
                    prime[j] = i;
                }
            }
        }
    }

    int a = 50;

    // TODO: print all prime factors of A

    cout << "1 ";
    while (a != 1)
    {
        cout << prime[a] << " ";
        a /= prime[a];
    }
    cout << endl;

    return 0;
}