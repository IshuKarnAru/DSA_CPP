# include <iostream>
using namespace std;

void sum(int arr[], int n){
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
}

int main() {
    int arr[100];
    int size;

    cout << "Enter the size of array : " << " ";
    cin >> size;

    cout << "Enter the elements : " << " ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int sum = sum(arr, size);
    cout << "The sum of elements inside array is : " << sum;
}