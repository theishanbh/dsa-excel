#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int a = 0;
    int b = 1;
    int c = a + b;
    while(n >0){
        cout << b << " ";
        a = b;
        b = c;
        c = a + b;
        n--;
    }
    return 0;
}