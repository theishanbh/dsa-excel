#include <iostream>
using namespace std;
#define n 100

class stack
{
private:
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow!" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack already empty!" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        return arr[top];
    }
    bool empty()
    {
        return (top == -1);
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    return 0;
}