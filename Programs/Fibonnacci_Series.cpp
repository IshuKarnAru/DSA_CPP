// Print Fibonacci Series: (using for loop)
// 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

# include <iostream>
using namespace std;

int main(){
    int n, a, b;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Eneter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;

    cout << "\n\nYour Fibonacci Series is:\n"<< a << ", " << b << ", ";

    for (int i = 1; i < n-1 ; i++)
    {
        int nextNumber = a + b;
        a = b;
        b = nextNumber;
        cout << nextNumber;
        if(i<n){
            cout<<", ";
        }
    }
}