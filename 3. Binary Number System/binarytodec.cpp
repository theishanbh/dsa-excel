#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter binary number ";
    cin >> s;
    int s_length = s.length() - 1;
    int init = 1;
    int sum = 0;
    for (int i = s_length; i >= 0; i--)
    {
        sum += init * int(s[i] - '0');
        init *= 2;
    }

    cout << sum << endl;

    return 0;
}