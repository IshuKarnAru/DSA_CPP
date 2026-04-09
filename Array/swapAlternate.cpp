#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
    // int first = 0;
    // int second = 1;

    // while (second < n){
    //     swap(arr[first], arr[second]);
    //     second += 2;
    //     first += 2;
    // }

    int temp;
    for (int i = 0; i <= n - 1; i += 2)
    {
        int a = i;
        int b = a + 1;
        if (b < n)
        {
            temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
        }
    }
}

void printAlternate(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {2, 6, 7, 1, 9};
    int arr2[6] = {5, 8, 2, 0, 21, 32};

    swapAlternate(arr1, 5);
    swapAlternate(arr2, 6);

    printAlternate(arr1, 5);
    printAlternate(arr2, 6);
}