#include <iostream>
using namespace std;

void recursive_insertion_sort(int arr[], int index, int lastIndex)
{
    if (index == lastIndex)
        return;

    for (int i = index; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
            swap(arr[i], arr[i - 1]);
        else
            break;
    }

    recursive_insertion_sort(arr, index + 1, lastIndex);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    recursive_insertion_sort(arr, 0, arrSize);

    cout<<"\n\n\n";
    
    for (int i = 0; i < arrSize; i++)
    {
        cout << "\t" << arr[i] << "\t";
    }
    cout << "\n\n\n";
    return 0;
}