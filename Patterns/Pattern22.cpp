/*
1111
 222
  33
   4
*/

#include <iostream>
using namespace std;

void fun(int n)
{
    int row = n;
    while (row > 0)
    {
        int k = 0;
        // Print space
        while (k < (n - row))
        {
            
            cout << " "<<" ";
            k++;
        }

        // Print numbers
        int col = 0;
        while (col < row)
        {
            cout << n + 1 - row << " ";
            col++;
        }
        cout << endl;
        row--;
    }
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    fun(n);
    return 0;
}