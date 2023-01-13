#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int arr[] = {12, 45, 23, 51, 19, 8};
    for (int x = 0; x < 6; x++)
    {
        cout << arr[x] << " ";
    }
    cout << "" << endl;

    int temp;
    int mx = arr[0];

    for (int i = 0; i < 6; i++)
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
        cout << mx << endl;
    }

    for (int x = 0; x < 6; x++)
    {
        cout << arr[x] << " ";
    }
    return 0;
}