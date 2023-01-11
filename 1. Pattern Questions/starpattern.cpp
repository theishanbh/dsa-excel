#include <iostream>
using namespace std;

int main()
{

    int i = 5;
    int j = 4;
    // cout << "enter rows: ";
    // cin >> i ;
    // cout << "enter columns: ";
    // cin >> j ;

    int init_i;
    int init_j;

    for (init_i = i; init_i > 0; init_i--)
    {
        int x = 2;
        for (init_j = 1; init_j <= i; init_j++)
        {
            if (init_j < init_i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        for (init_j = init_i; init_j < i; init_j++)
        {
            cout << "*";
            x++;
        }
        cout << endl;
    }

    return 0;
}