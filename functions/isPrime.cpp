#include <iostream>
using namespace std;

int isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter the number to find, if it is prime number or not a prime number : ";
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }

    return 0;
}