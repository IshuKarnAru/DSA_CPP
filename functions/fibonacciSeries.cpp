/*
i/p -> n
o/p -> nth fibonacci siries

if we have to print the fibonacci series then we can use the following code :
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, .....

Then we can see that the first two numbers are 0 and 1 and from the third number onwards, each number is the sum of the previous two numbers.

n=5 , o/p -> 5
n=10, o/p -> 55
*/

# include <iostream>
using namespace std;

int fibonacciSeries(int n){
    int prev1 = 1;
    int prev2 = 0;
    int current = 0;

    for(int i = 2; i <= n ; i++){
        current = prev1 + prev2 ;
        prev2 = prev1 ;
        prev1 = current ;
    }
    return current;
}

int main(){
    int n;
    cout << "Enter the value of n (nth term) : " << " ";
    cin >> n;

    int fibonacci = fibonacciSeries(n);
    cout << "The nth term of Fibonacci Series is : " << fibonacci << endl;

    return 0;
}