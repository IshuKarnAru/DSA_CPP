# include <iostream>
using namespace std;

int power(int num1, int num2){
    int result = 1;

    for (int i = 1; i <= num2; i++){
        result = result * num1;
    }
    return result;
}

int main(){

    int base, exponent;
    cout << "Enter the base value : ";
    cin >> base;
    cout <<"Enter the exponent value : ";
    cin >> exponent;

    int answer = power(base, exponent);
    cout << "\n" << base << " raised to the power of " << exponent << " is " << answer;
}