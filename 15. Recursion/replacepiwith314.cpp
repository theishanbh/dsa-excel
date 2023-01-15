#include <bits/stdc++.h>
using namespace std;

string replace(string s)
{
    // length of string - los
    int los = s.length();
    if (los < 2)
    {
        return s;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        return "3.14" + replace(s.substr(2, los - 2));
    }
    return s[0] + replace(s.substr(1, los - 1));
}

int main()
{
    string s;
    cout << replace("pihellopihellopi") << endl;
    return 0;
}