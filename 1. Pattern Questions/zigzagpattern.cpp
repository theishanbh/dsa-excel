#include <iostream>
using namespace std;

int main()
{

    int i = 15;
    int j;
    // cout << "enter rows: ";
    // cin >> i ;
    // cout << "enter columns: ";
    // cin >> j ;

    int init_i;
    int init_j;

    for (init_i = 1; init_i <= 3; init_i++)
    {
        for (init_j = 1; init_j <= i; init_j++)
        {
            if ((init_j + init_i) % 4 == 0)
            {
                cout << "*";
            }
            else if (((init_j % 4) == 0) && ((init_i % 2) == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}