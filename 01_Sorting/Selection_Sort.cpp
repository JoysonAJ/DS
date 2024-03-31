#include <iostream>
using namespace std;

int main()
{
    int arr[1000], arrLength;
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arrLength - 1; i++)
    {
        int minValueIndex = i;
        for (int j = i + 1; j < arrLength; j++)
        {
            if (arr[i] > arr[j])
            {
                minValueIndex = j;
            }
        }
        swap(arr[i], arr[minValueIndex]);
    }

    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}