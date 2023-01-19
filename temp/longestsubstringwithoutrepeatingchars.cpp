#include <iostream>
#include <vector>
#include <map>

using namespace std;

int solution(string str)
{
    int ans = 0;
    int i = -1;
    int j = -1;
    map<char, int> m;
    while (true)
    {

        bool f1 = false;
        bool f2 = false;

        // acquire
        int len = str.length();
        while (i < len - 1)
        {
            f1 = true;
            i++;
            char ch = str[i];
            m[ch] += 1;
            if (m[ch] == 2)
            {
                break;
            }
            else
            {
                int len = i - j;
                if (len > ans)
                {
                    ans = len;
                }
            }
        }

        // release

        while (j < i)
        {
            f2 = true;
            j++;
            char ch = str[j];
            m[ch] -= 1;
            if (m[ch] == 1)
            {
                break;
            }
        }

        if (!f1 && !f2)
            break;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << solution(s) << endl;
    return 0;
}