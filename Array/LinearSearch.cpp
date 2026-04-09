#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int size, key, arr[10];

    cout << "\nEnter the number of elements in the array : " << " ";
    cin >> size;
    int n = size;
    cout << "\nEnter the elements in the array : " << " ";

    for (int i = 0; i <= size - 1; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter the element to search in the array : " << " ";
    cin >> key;

    bool found = linearSearch(arr, n, key);

    if (found)
    {
        cout << "\n"
             << key << " is present in the array." << endl;
    }
    else
    {
        cout << "\n"
             << key << " is not present in the array." << endl;
    }

    return 0;
}