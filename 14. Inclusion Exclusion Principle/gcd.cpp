#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int rem;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a = 42;
    int b = 72;
    cout << "GCD : " << gcd(a, b) << endl;
    return 0;
}