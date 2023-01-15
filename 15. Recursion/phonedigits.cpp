#include <bits/stdc++.h>
using namespace std;

string phone[] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generate(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string code = phone[ch - '0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        generate(ros, ans + code[i]);
    }
}

int main()
{
    string s = "34";
    string temp = "abcde";
    cout << temp.substr(1) << endl;
    // generate(s, "");
    return 0;
}