#include <iostream>
using namespace std;

int main()
{
    int arr[1000], inputSize;
    cin >> inputSize;

    for (int i = 0; i < inputSize; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < inputSize; i++)
    {
        for (int j = i; j >0; j--)
        {
            if (arr[j] < arr[j -1 ])
                swap(arr[j], arr[j -1 ]);
            else
                break;
        }
    }

    for (int i = 0; i < inputSize; i++)
    {
        cout << "\t" << arr[i] << "\t";
    }
    return 0;
}