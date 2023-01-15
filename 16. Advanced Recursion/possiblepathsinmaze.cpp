#include <bits/stdc++.h>
using namespace std;

int pathsInMaze(int n, int i, int j)
{
    if (n <= i || n <= j)
        return 0;
    if (n - 1 == i && n - 1 == j)
        return 1;
    return pathsInMaze(n, i + 1, j) + pathsInMaze(n, i, j + 1);
}

int main()
{
    int n = 3;
    cout << pathsInMaze(n, 0, 0) << endl;
    return 0;
}