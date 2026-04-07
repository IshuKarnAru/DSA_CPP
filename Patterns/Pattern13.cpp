/*
A B C
D E F
G H I
*/

# include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int row = 1;
    char start = 'A';
    while(row <=n){
        int col = 1;
        while (col<= n){
            cout << start++ << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}