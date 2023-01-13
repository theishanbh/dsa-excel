#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1234050;
    int ans = 0;

    while (n > 0)
    {
        ans = ans * 10 + (n % 10);
        n /= 10;
    }

    cout << ans << endl;

    return 0;
}