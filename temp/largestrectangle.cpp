#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hist[] = {3, 5, 1, 7, 5, 9};
    int n = sizeof(hist) / sizeof(hist[0]);
    stack<int> rect;

    for (int i = 0; i < n; i++)
    {
        if (rect.empty() || rect.top() < hist[i])
        {
            rect.push(i);
        }
        if (rect.top() > hist[i]){}
    }

    /* brute force method
    for (int i = 0; i < n; i++)
    {
        int minima = hist[i];
        for (int j = i; j < n; j++)
        {
            minima = min(minima, hist[j]);
            rect = max(rect, (j - i + 1) * minima);
        }
    }

    cout << "Largest rect possible:" << rect << endl;
