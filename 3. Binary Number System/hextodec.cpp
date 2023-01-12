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
        int calc = s[i] - '0';
        if (calc < 10 && calc >= 0)
        {
            sum += init * int(s[i] - '0');
        }
        else
        {
            int curr = 0;
            if (s[i] == 'A')
                curr = 10;
            else if (s[i] == 'B')
                curr = 11;
            else if (s[i] == 'C')
                curr = 12;
            else if (s[i] == 'D')
                curr = 13;
            else if (s[i] == 'E')
                curr = 14;
            else
                curr = 15;

            sum += curr * init;
            
        }
        init *= 16;
    }

    cout << sum << endl;

    return 0;
}