#include<iostream>
using namespace std;

class Lsearch{
    public:
        int n, arr[];
        Lsearch(int sz){
            n = sz;
            arr[n];
        }

    void Insertioin(){
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
    }

    void Search(){
        int ele;
        cout << "Enter the searching element";
        cin >> ele;

        for (int i = 0; i < n; i++){
            if(ele == arr[i]){
                cout << "Element " << ele << " found at index " << i;
                return;
            }
        }
        cout << "Element not Found";
    }

    void Display(){
        cout << "\n";
        for (int i = 0; i < n; i++){
            cout << arr[i] << "\t";
        }
        cout << "\n\n";
    }
};

int main(){
    int n;
    cout << "Enter the size " ;
    cin >> n;
    Lsearch L(n);
    cout << "Enter the array element ";
    L.Insertioin();
    cout << "Array element ";
    L.Display();
    L.Search();
    return 0;
}
