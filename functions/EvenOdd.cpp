# include <iostream>
using namespace std;

// return 1 if even
// return 0 if odd
int isEven(int num){
    if(num&1){
        return 0;
    }
    else {
        return 1;
    }
}

int main(){
    int var;
    cout << "Enter the number : ";
    cin >> var;

    if(isEven(var)){
        cout << "Given number is even.";
    }
    else {
        cout << "Given number is odd.";
    }
}