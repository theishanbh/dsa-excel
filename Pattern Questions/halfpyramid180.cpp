#include <iostream>
using namespace std;

int main()
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 4; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}