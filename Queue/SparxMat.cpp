#include<iostream>
using namespace std;

int main(){
    int a[20][20], i, j, m, n,item;
    cout << "Enter the Value (Rows & Columns) :";
    cin >> m >> n;
    int nw[10][10], cnt = 0;
    cout << "Enter the element:";
    int k = 0;
    for (i = 0; i < m;i++){
        for (j = 0; j < n;j++){
            cin >> a[i][j];

            if(a[i][j] != 0){
                nw[i][j]=a[i][j];
                k++;
            }
            else
                cnt++;
        }
    }
    cout << "The Number of Matrix are \t" << cnt << endl;
    cout << "The Non Zero Elemnts Are \t" << k << endl;

    cout << "matix is :\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout<<endl<<"\nSecond array\n";

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            if( a[i][j] != 0)
                cout<<nw[i][j]<<"\t";
        }
        cout<<endl;
    }

    if( cnt > (m*n)/2){
        cout << "The number of element present in the matix is " << cnt << endl;
        cout << "The Number of Non-Zero element are " << endl;
        cout << "It's Sparx Matrix";
    }
    else{
        cout << "The number of element present in the matix is " << cnt << endl;
        cout << "The Number of Non-Zero element are " << endl;
        cout << "It's not Sparx Matrix";
    }
    return 0;
}