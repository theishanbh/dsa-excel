#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int ans = 1;
    for (int i = n; i > 0; i--)
    {
        ans *= i;
    }
    cout << ans << endl;
    
    return 0;
}