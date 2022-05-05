#include<iostream>
using namespace std;

int StringCount(char str[]){
    int sz =0;
    for(int i=0;str[i] !='\0';i++){
        sz++;
    }
    return sz;
}


void StrCompare(char str1[],char str2[]){
    int len1 = StringCount(str1);
    int len2 = StringCount(str2);

    if(len1 != len2){
        cout << "Not Equal";
        return;
    }
    for (int i = 0; i < len1;i++){
        if(str1[i] != str2[i]){
            cout << "Not equal";
            return;
        }
    }
    cout << "Equal";
}

int main(){

    char str1[25],str2[25];
    cout<<"Enter the String1 ";
    cin >> str1;
    cout << "Enter the String 2 ";
    cin >> str2;
    StrCompare(str1,str2);

    return 0;
}