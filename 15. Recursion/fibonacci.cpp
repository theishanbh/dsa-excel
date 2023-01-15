#include <bits/stdc++.h>
using namespace std;

// TODO: fibonacci variations

// print n fibonacci number
void nfib(int a, int b, int n)
{
    if (n == 0)
    {
        cout << endl;
        return;
    }
    cout << b << " ";
    nfib(b, a + b, n - 1);
}

// print nth fibonnaci number
int nthfib(int a, int b, int n)
{
    if (n == 1)
    {
        return b;
    }
    return nthfib(b, a + b, n - 1);
}

int main()
{
    int n = 10;
    nfib(0, 1, 10);
    cout << nthfib(0, 1, 10) << endl;
    return 0;
}