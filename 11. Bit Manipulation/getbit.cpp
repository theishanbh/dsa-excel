#include <bits/stdc++.h>
using namespace std;

// this function will tell whether there is 0 or 1 on a givn pos
bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

// changes bit value to 1
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

// changes bit value to 0
int clearBit(int n, int pos)
{
    return (n & (~(1 << pos)));
}

int main()
{
    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 0) << endl;
    return 0;
}