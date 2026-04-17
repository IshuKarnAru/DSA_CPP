# include <iostream>
using namespace std;

int findMax(int arr[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        } 
    }
    return max;
}

int findMin(int arr[], int n){
    int min = INT_MAX;
    for (int i = 0; i < n; i++){
        if (min > arr[i]){
            min = arr[i];
        } 
    }
    return min;
}

int main() {
    int size ;
    int ch;
    cout << "\nEnter the size of array : " << " ";
    cin >> size;

    int arr[100];
    
    cout << "\nEnter the elements : " << " ";

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "\nSelect your preferred choice :\n1. To obtain MAX\n2. To obtain MIN\n3. To Exit\n\nEnter your choice : " << " " ;
    cin >> ch;

    while (true){
        switch(ch) {
            case 1: cout << "\n===========================\nMAX value in array is : " << findMax(arr, size) << "\n===========================" << endl;
                    break;

            case 2: cout << "\n===========================\nMIN value in array is : " << findMin(arr, size) << "\n===========================" << endl;
                    break;

            case 3: break;

            default : cout << "\nEnter the valid choice...\n";
        }
        break;
    }

    cout << "\nProgram finished !!" << endl;
    exit(0);
}