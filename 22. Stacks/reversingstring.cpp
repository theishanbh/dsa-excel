#include <iostream>
#include <stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    for (int i = 0; i < s.size(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.size())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;
    string s = "Hey, how are you doing";
    reverseSentence(s);
}