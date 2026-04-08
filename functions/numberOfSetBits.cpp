/*
when we have to find the total number of set bits in a and b, we can use the bitwise AND operator (&) to find the common set bits between a and b. Then, we can count the number of set bits in the result.

i/p -> a & b
o/p -> total no. of set bits in a and b

Then we can use the following code to find the total number of set bits in a and b:

a = 2 -> 10
b = 3 -> 11

count of set bits in a & b = count of set bits in 10 & 11 = count of set bits in 10 = 1 & count of set bits in 11 = 2

So, total number of set bits in a and b = 1 + 2 = 3
o/p -> 3

*/


# include <iostream>
using namespace std;

int checkSetBit(int n, int m){
    int count_n =0;
    int count_m = 0;
    
    while (n!=0){
        if(n&1){
            count_n++;
        }
        n = n >> 1;
    }

    while (m!=0){
        if(m&1){
            count_m++;
        }
        m = m >> 1;
    }

    return (count_n + count_m);
}

int main(){
    int a, b;
    cout << "Enter the first number 'a' : " << " " ;
    cin >> a;
    cout << "Enter the first number 'b' : " << " " ;
    cin >> b;

    int result = checkSetBit(a, b);
    cout << "Count of set bits in a = "<< a << " and " <<"b = " << b << " is " << result << endl;

    return 0;
}