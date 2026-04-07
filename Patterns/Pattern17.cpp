/*
A
B C
C D E
D E F G 
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    // while (row <=n){
    //     char ch = 'A' + row - 1;
    //     int col = 1;
    //     while (col<=row){
    //         cout << ch++ << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    while (row <= n){
        int col = 1;
        while (col<=row){
            char ch = 'A' + row + col - 2 << " ";
            cout << col++;
        }
        cout << endl;
        row++;
    }
}