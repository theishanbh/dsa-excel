#include <bits/stdc++.h>
using namespace std;

char sumToChar(int sum)
{
    if (sum == 15)
        return 'F';
    else if (sum == 14)
        return 'E';
    else if (sum == 13)
        return 'D';
    else if (sum == 12)
        return 'C';
    else if (sum == 11)
        return 'B';
    else if (sum == 10)
        return 'A';
    else
    {
        return char(int('0') + sum);
    }
}

int main()
{
    string s;
    cout << "Enter binary number ";
    cin >> s;
    int s_length = s.length() - 1;
    string ans = "";
    int sum = 0;
    int four_multiple = 0;
    int two = 1;
    for (int i = s_length; i >= 0; i--)
    {
        sum += (s[i]-'0') * two;
        two *= 2;
        if (four_multiple == 3)
        {
            ans = sumToChar(sum) + ans;
            four_multiple = -1;
            sum = 0;
            two = 1;
        }
        four_multiple += 1;
        four_multiple = four_multiple % 4;
    }
    if(sum > 0){
        ans = sumToChar(sum) + ans;
    }

    cout << ans << endl;

    return 0;
}