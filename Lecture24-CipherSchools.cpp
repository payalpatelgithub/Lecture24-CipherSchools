#include <iostream>
using namespace std;

bool compareValues(int arr[], int size)
{
    // Compare values in the array
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    cout << "Values for comparison" << endl;

    if (compareValues(arr, 10)) {
        cout << "Values are in non-decreasing order" << endl;
    } else {
        cout << "Values are not in non-decreasing order" << endl;
    }

    return 0;
}
