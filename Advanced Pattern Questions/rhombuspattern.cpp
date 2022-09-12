#include <iostream>
using namespace std;

int main()
{
    // first half
    for (int i = 4; i >= 0; i--)
    {
        // first quadrant
        for (int j = i; j > 0; j--)
        {
            cout << " ";
        }

        for (int j = i; j <= 4; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    // second half
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

/*

    * - 4
   * * - 3
  * * * - 2
 * * * * - 1
* * * * *

*/
