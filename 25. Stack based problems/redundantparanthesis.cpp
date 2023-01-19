#include <iostream>
#include <stack>
using namespace std;

int redundantParentheses(string s)
{
    stack<char> st;
    int ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '-')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
                ans++;
            }
            else if (st.top() != '(')
            {
                st.pop();
                st.pop();
            }
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << redundantParentheses(s) << endl;
    return 0;
}