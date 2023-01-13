#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // 0,8 -> 4 -> 5
    // 0,3 -> 1 -> 2
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int index = -1;
    // implement binary search
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] == key)
        {
            index = mid;
            break;
        }
        else if (arr[mid] > key)
        {
            // for +/- 1 one must put <= in the while condition
            high = mid-1;
        }
        else if(arr[mid] < key){
            low = mid+1;
        }
    }
    if (index == -1)
    {
        cout << "Key not found";
    }
    else
    {
        cout << "Key found at index: " << index;
    }
    
return 0;
}