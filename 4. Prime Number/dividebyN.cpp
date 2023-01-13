#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1;
    bool prime = true;
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
    
    return 0;
}