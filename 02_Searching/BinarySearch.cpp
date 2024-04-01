#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start = 0, end = n - 1, mid = 0;

    while (start <= end){
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            start = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main(){
    int arr[1000];
    int n, key = 0;
    cout << "Enter the Array size \t : \t";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "\n enter searching element \t : \t";
    cin >> key;

    cout << endl
         << BinarySearch(arr, n, key) << endl;
    return 0;
}