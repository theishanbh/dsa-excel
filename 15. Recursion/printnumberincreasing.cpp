#include <bits/stdc++.h>
using namespace std;

void printNumber(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printNumber(n - 1);
}

void printNumberDec(int n)
{
    if (n == 0)
        return;
    printNumberDec(n - 1);
    cout << n << " ";
}

int main()
{
    printNumber(5);
    cout << endl;
    printNumberDec(5);
    cout << endl;
    return 0;
}