/*
****
***
**
*
*/

# include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    while(row<=n){
        int col = n-row+1;
        while (col){
            cout << "* ";
            col--;
        }
        cout << endl;
        row++;
    }
}