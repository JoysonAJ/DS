#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int last)
{
    int tempArr[100], left = start, right = mid + 1, iterator = start;

    while (left <= mid && right <= last)
    {
        if (arr[left] <= arr[right])
            tempArr[iterator++] = arr[left++];
        else
            tempArr[iterator++] = arr[right++];
    }

    while (left <= mid)
    {
        tempArr[iterator++] = arr[left++];
    }

    while (right <= last)
    {
        tempArr[iterator++] = arr[right++];
    }

    for (int i = start; i <= last; i++)
    {
        arr[i] = tempArr[i];
    }
    cout << endl;
}

void mergeSort(int arr[], int start, int last)
{
    if (start >= last)
        return;

    int mid = (start + last) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, last);

    merge(arr, start, mid, last);
}

int main()
{
    int sizeArr = 7; //, arr[1000];
    int arr[] = {3, 2, 8, 5, 1, 4, 23};
    mergeSort(arr, 0, sizeArr - 1);
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n \n";
    return 0;
}