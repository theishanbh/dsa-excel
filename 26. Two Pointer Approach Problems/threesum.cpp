#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

bool threeSum(vector<int> a, int target)
{
    int n = a.size();
    sort(a.begin(), a.end());
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        int lo = i + 1, hi = n - 1;
        while (lo < hi)
        {
            int current = a[i] + a[lo] + a[hi];
            if (current == target)
            {
                found = true;
            }
            if (current < target)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }
    return found;
}

int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    cout << threeSum(a, target) << endl;
    return 0;
}

/*
test case 1:
6 24
12 3 6 9 34 25
test case 2:
6 24
1 3 6 9 35 25
*/