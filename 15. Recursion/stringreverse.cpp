#include <bits/stdc++.h>
using namespace std;

string stringReverse(string s)
{
    int lengthOfStr = s.length();
    if (lengthOfStr == 0)
    {
        return "";
    }
    return s[lengthOfStr - 1] + stringReverse(s.substr(0, lengthOfStr - 1));
}

int main()
{
    cout << stringReverse("hello") << endl;
    return 0;
}