#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int solArr[n - k + 1] = {0};
    deque<int> window;
    int i = 0;
    for (; i < k; i++)
    {
        while (!window.empty() && arr[i] >= arr[window.front()])
        {
            window.pop_front();
        }
        window.push_back(i);
    }

    solArr[i - k] = arr[window.front()];

    for (; i < n; i++)
    {
        while (!window.empty() && arr[i] >= arr[window.front()])
        {
            window.pop_front();
        }
        window.push_back(i);
        solArr[i - k + 1] = arr[window.front()];
    }

    for (int j = 0; j < n - k + 1; j++)
    {
        cout << solArr[j] << " ";
    }
    cout << endl;
}