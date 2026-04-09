# include <iostream>
using namespace std;


void reverseArray(int arr[], int n){
    // for (int i = 0; i <= n / 2 - 1; i++) {
    //     int temp = arr[i];
    //     arr[i] = arr[n - 1 - i];
    //     arr[n - 1 - i] = temp;
    // }

    int start = 0;
    int end = n - 1;

    while (start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i <= n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main (){
    int arr1[6] = {34, 98, 24, 53, 14, 92};
    int arr2[7] = {60, 29, 61, 80, 46, 32, 19};

    reverseArray(arr1, 6);
    reverseArray(arr2, 7);

    printArray(arr1, 6);
    printArray(arr2, 7);
}