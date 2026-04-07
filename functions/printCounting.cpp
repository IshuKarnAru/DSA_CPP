#include <iostream>
using namespace std;

void printCounting(int num){
    for (int i = 1; i <= num; i++){
        cout << i << " ";
    }
    cout << endl;
    return;
}

int main(){
    int n;

    cout << "Enter the max number till which you want to print counting : ";
    cin >> n;
    cout << "\n Counting from 1 to " << n << " is" << " ";
    printCounting(n);
}