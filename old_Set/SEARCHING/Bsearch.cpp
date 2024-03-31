#include<iostream>
using namespace std;

class BinarySearch{
    
    public:
        int n,arr[];
        BinarySearch(int sz){
            n = sz;
            arr[n];
        }

        void Insertioin() {
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
        }

        void Display(){
            BubleSort();
            cout << "\n";
            for (int i = 0; i < n; i++){
                cout << arr[i] << "\t";
            }
            cout << "\n\n";
        }

        void BubleSort(){
            
            for (int i = 0; i < n - 1; i++){
                for (int j = 0; j < n - i - 1; j++){
                    if (arr[j] > arr[j + 1]){
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
        }

        void Bsearch(){
            int ele;
            cout << "Enter the searching element";
            cin >> ele;

            
            int high = n;
            int low = 0;
            while( low <= high){

                int mid = (low + high) / 2;

                if( arr[mid] == ele){
                    cout << ele << " found at index" << mid;
                    return;
                }

                else if(arr[mid] < ele)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            cout << "\n\t Element Not Found\n\n\n";
        }
};

int main(){
    int n;
    cout << "Enter the size ";
    cin >> n;
    BinarySearch B(n);
    cout << "Enter Element into array :";
    B.Insertioin();
    cout << "Sorrted Array element array";
    B.Display();

    B.Bsearch();
    return 0;
}