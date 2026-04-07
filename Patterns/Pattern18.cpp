/*
D
C D
B C D
A B C D
*/

# include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    while (row <=n){
        int col = 1;
        char ch = 'D' - row + 1;
        while (col <= row){
            cout << ch++ << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}