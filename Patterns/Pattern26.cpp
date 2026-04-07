/*
   1
  121
 12321
1234321
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row = 1;
    while (row <= n) {

        // space print karo (1st Triangle)
        int space = n - row;
        while(space){
            cout << " ";
            space--;
        }

        // Print 2nd Triangle
        int col = 1;
        while (col<=row){
            cout << col;
            col++;
        }

        // Print 3rd Triangle
        int start = row - 1;
        while (start){
            cout << start;
            start--;
        }
        cout << endl;
        row++;
    }
}