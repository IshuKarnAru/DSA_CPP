/*

Arithmetic Progression (AP) = (3 * n +7)


i/p -> n
o/p -> nth term of the arithmetic progression

if we have to find the nth term of the arithmetic progression then we can use the following code :
n=1, o/p -> 10
n=2, o/p -> 13

*/

# include <iostream>
using namespace std;

int airthmeticProgression(int n){
    return (3*n)+7;
}

int main() {
    int n;
    cout << "Enter the value of 'n' : " << " ";
    cin >> n ;

    int result = airthmeticProgression(n);
    cout << "\nThe Airthmetic Progression for " << n << " is " << result << endl;
}