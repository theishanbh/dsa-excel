#include <bits/stdc++.h>
using namespace std;

string moveAllXToEnd(string s)
{
    // length of string - los
    int los = s.length();
    if (los == 1)
        return s;
    if (s[0] == 'x')
        return moveAllXToEnd(s.substr(1, los - 1)) + 'x';
    return s[0] + moveAllXToEnd(s.substr(1, los - 1));
}

int main()
{
    string s;
    cout << moveAllXToEnd("spxctro") << endl;
    return 0;
}