#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 173;
    int n_copy = n;
    int check_ans = n;
    // find number of digits
    int no_digits = 0;
    while (n > 0)
    {
        no_digits += 1;
        n /=10;
    }
    
    // TODO: go to each digit and increase by power
        int digit = 0;
    while (n_copy > 0)
    {
        digit = n_copy%10;
        check_ans -= pow(digit, no_digits);
        n_copy /= 10;
    }

    if (check_ans == 0)
    {
        cout << "Armstrong number";
    }else{
        cout << "Not armstrong number";
    }
    
    


    return 0;
}