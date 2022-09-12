#include<iostream>
using namespace std;

int main(){
    int i,j;
    // for loop for rows
    for(i=5;i>=1;i--){
        // for loop for columns
        for(j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}