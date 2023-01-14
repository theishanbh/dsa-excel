#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 35;
    if (n && !(n & (n - 1)))
    {
        cout << "power of 2" << endl;
    }
    else
    {
        cout << "not power" << endl;
    }
    return 0;
}