#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key){
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            // for +/- 1 one must put <= in the while condition
            binarySearch(arr, low,mid - 1, key);
        }
        else if(arr[mid] < key){
            binarySearch(arr, mid+1,high, key);
        }
    }

    return -1;
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int low = 0;

    cout << binarySearch(arr, low, n-1,key) << endl;

    return 0;
}