/*
****
 ***
  **
   *
*/

// # include<iostream>
// using namespace std;

// int main (){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int i = 1;
//     while (i<=n){
//         //Print spaces
//         int space = n - i;
//         while (space){
//             cout << " ";
//             space--;
//         }

//         //Print stars(*)
//         int col = 1;
//         while (col<=i){
//             cout << "*";
//             col++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// C++ code to demonstrate pattern printing
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void pypart2(int n)
{
    int i = n, j = 0, k = 0;
    while (i > 0)
    {

        // for number of spaces
        while (k < (n - i))
        {
            cout << "  ";
            k++;
        }

        // resetting k because we want to run k from
        // beginning.
        k = 0;
        while (j < i)
        {
            cout << "* ";
            j++;
        }

        // resetting k so as it can start from 0.
        j = 0;
        i--;
        cout << endl;
    }
}

// Driver Code
int main()
{
    int n ;
    cout << "Enter the number of n: ";
    cin >> n;

    // Function Call
    pypart2(n);
    return 0;
}
