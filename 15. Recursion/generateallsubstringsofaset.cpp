#include <bits/stdc++.h>
using namespace std;

void generate(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    generate(ros, ans);
    generate(ros, ans + ch);
}

int main()
{
    string s = "ABC";
    generate(s, "");
    return 0;
}