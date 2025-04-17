#include <iostream>
using namespace std;

void selectionSort(int arr[], int arrSize)
{
    int minIndex = 0;
    for (int i = 0; i < arrSize - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        if (arr[minIndex] != arr[i])
        {
            arr[minIndex] = arr[minIndex] + arr[i];
            arr[i] = arr[minIndex] - arr[i];
            arr[minIndex] = arr[minIndex] - arr[i];
            cout << arr[minIndex] << "Swappped with" << arr[i] << "\n";
        }
    }
}

int main()
{
    int arr[1000], arrLength;
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, arrLength);

    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}