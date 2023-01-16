#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int v)
    {
        data = v;
        next = NULL;
    }
};

class stack
{
public:
    node *top;
    int idx;
    stack()
    {
        top = NULL;
        idx = -1;
    }
};

void push(stack &s, int v)
{
    node *n = new node(v);
    if (s.idx == 99 || n == NULL)
    {
        cout << "Stack Overflow\n";
        return;
    }
    n->next = s.top;
    s.top = n;
    s.idx++;
}

void pop(stack &s)
{
    if (s.idx == -1 && s.top == NULL)
    {
        cout << "No elements to pop\n";
        return;
    }
    node *td = s.top;
    s.top = s.top->next;
    s.idx--;
    delete td;
}

int Top(stack s)
{
    if (s.top == NULL)
    {
        cout << "No elements in stack\n";
        return -1;
    }
    return (s.top->data);
}

bool empty(stack s)
{
    return (s.top == NULL);
}

int main()
{
    stack s;
    pop(s);
    cout << empty(s) << endl;
    push(s, 4);
    push(s, 5);
    push(s, 9);
    cout << Top(s) << endl;
    pop(s);
    pop(s);
    pop(s);
    cout << Top(s) << endl;
    cout << empty(s) << endl;
    return 0;
}