#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1000;
    int a = 5;
    int b = 7;
    int x = n / a;
    int y = n / b;
    int z = n / (a * b);
    int ans = x + y - z;
    cout << "Answer : " << ans << endl;
    return 0;
}