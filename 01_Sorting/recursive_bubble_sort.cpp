#include <iostream>
using namespace std;

void recursive_bubble_sort(int arr[], int n)
{
    if (n == 1)
        return;

    bool didSwap = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            didSwap = true;
        }
    }

    if(didSwap) return

    recursive_bubble_sort(arr, n - 1);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    recursive_bubble_sort(arr, 6);

    // int arr[1000], inputSize;
    // cin >> inputSize;

    // for (int i = 0; i < inputSize; i++)
    // {
    //     cin >> arr[i];
    // }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}