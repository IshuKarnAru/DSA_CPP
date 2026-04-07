//Check given number is prime or not.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number";
            break;
        }
        else{
            cout << n << " is a prime number";
            break;
        }
        i++;
        cout << endl;
    }
}