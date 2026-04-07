/*
1
2 3 
3 4 5
4 5 6 7
*/

# include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        int var = row;
        while(col<=row){
            cout << var << " ";
            var++;
            col++;
        }
        cout << endl;
        row++;
    }
}