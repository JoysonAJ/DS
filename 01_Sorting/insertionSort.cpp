#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
    return;
}

int main()
{
    int arr[1000], inputSize;
    cin >> inputSize;

    for (int i = 0; i < inputSize; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr,inputSize);

    for (int i = 0; i < inputSize; i++)
    {
        cout << "\t" << arr[i] << "\t";
    }
    return 0;
}