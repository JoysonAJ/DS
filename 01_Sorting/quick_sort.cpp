#include <iostream>
using namespace std;

int Partition(int arr[], int start, int last)
{
    
    int pivot = arr[last];
    int index = start - 1;

    for (int j = 0; j < last; j++)
    {
        if (arr[j] < pivot)
        {
            index++;
            swap(arr[j], arr[index]);
        }
    }
    swap(arr[index + 1], arr[last]);
    return index + 1;
}

void QuickSort(int arr[], int start, int last)
{
    if (start < last)
    {
        int pi = Partition(arr, start, last);
        QuickSort(arr, start, pi - 1);
        QuickSort(arr, pi + 1, last);
    }
}

int main()
{
    int n = 5, arr[] = {4, 6, 2, 5, 7};
    // int n = 8, arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    QuickSort(arr, 0, n - 1);

    cout << "\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n\n";
    return 0;
}