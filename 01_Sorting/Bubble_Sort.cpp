#include <iostream>
using namespace std;

int main() {
    int arr[1000], inputSize;
    cin >> inputSize;

    for (int i = 0; i < inputSize; i++) {
        cin >> arr[i];
    }

    for (int i = inputSize - 2; i >= 0; i--) {
        bool isSwapped = 0;
        for (int j = 0; j <= i; j++) {
            if (arr[j] > arr[j + 1]) {
                // in-build method
                isSwapped = 1;
                cout << "\t"
                     << "swpped" << arr[j] << "\t" << arr[j + 1] << endl;
                swap(arr[j], arr[j + 1]);

                // incase no inbuild method
                /*
                    int temp = arr[i];
                    arr[i] =arr[minValueIndex];
                    arr[minValueIndex] = temp;
                */
            }
        }
        // not swapped array is sorted so break the loop
        if (isSwapped == 0)
            break;
    }
    for (int i = 0; i < inputSize; i++){
        cout << "\t" << arr[i] << "\t";
    }

    return 0;
}