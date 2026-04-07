#include <iostream>
using namespace std;

/*
nCr = n! / (r! * (n-r)!)
*/

int factorial(int num)
{
    int fact = 1;

    for (int i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numerator = 1;
    int denominator = 1;

    numerator = factorial(n);
    denominator = factorial(r) * factorial(n - r);

    return (numerator/denominator);
}

int main()
{
    int n, r;
    cout << "Enter the value of 'n' : ";
    cin >> n;
    cout << "Enter the value of 'r' : ";
    cin >> r;

    int answer = nCr(n, r);
    cout << "\nThe value of nCr for " << n << " and " << r << " is " << answer << endl;
}