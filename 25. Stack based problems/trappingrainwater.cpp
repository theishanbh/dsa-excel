#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int trap(vector<int> height)
{
    int n = height.size();
    int leftmax[n];
    int rightmax[n];
    int rain = 0;
    int totalwater = 0;

    for (int i = 0; i < n; i++)
    {
        rain = max(rain, height[i]);
        leftmax[i] = rain;
    }
    rain = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        rain = max(rain, height[i]);
        rightmax[i] = rain;
    }
    for (int i = 0; i < n; i++)
    {
        int water = min(leftmax[i], rightmax[i]) - height[i];
        totalwater += water;
    }
    return totalwater;
}

int main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(a) << endl;
    return 0;
}