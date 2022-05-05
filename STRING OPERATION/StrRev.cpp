#include<iostream>
using namespace std;

int StringCount(char str[]){
    int sz =0;
    for(int i=0;str[i] !='\0';i++){
        sz++;
    }
    return sz;
}


void StrReverse(char str1[]){
    int len1 = StringCount(str1);
    cout << "\nReverse String is";
    for (int i = len1; i >= 0;i--){
        cout << str1[i];
    }
    cout << "\n\n";
}

int main(){
    cout << "\n\n";
    char str1[25];
    cout<<"Enter the String ";
    cin >> str1;
    StrReverse(str1);
    return 0;
}