#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    // length of string - los
    int los = s.length();
    if (los < 2)
    {
        return s;
    }
    string toBeAdded = "";
    if (s[0] != s[1])
        toBeAdded = s[0];
    return toBeAdded + removeDuplicates(s.substr(1, los - 1));
}

int main()
{
    string s;
    cout << removeDuplicates("pihellopihellopi") << endl;
    return 0;
}