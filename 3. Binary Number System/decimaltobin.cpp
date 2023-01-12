#include <bits/stdc++.h>
using namespace std;


int main()
{
    int decimal;
    cout << "Enter decimal number ";
    cin >> decimal;
    int ans = 0;
    int ten = 1;
    while( decimal > 0){
        ans += (decimal % 2) * ten;
        ten *= 10;
        decimal /= 2;
    }

    cout << ans << endl;
    return 0;
}