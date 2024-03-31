#include<iostream>
using namespace std;

int StringCount(char str[]){
    int sz =0;
    for(int i=0;str[i] !='\0';i++){
        sz++;
    }
    return sz;
}


void SubString(char str1[]){
    int len1 = StringCount(str1);
    
    int StartPos,EndPos;
    cout << "Enter the Starting position";
    cin >> StartPos;
    cout << " Enter the ending position ";
    cin >> EndPos;
    if( (StartPos < EndPos) && (0 <= StartPos && EndPos < len1) ){
        for (int i = StartPos; i < EndPos; i++){
            cout << str1[i] << "";
        }
        cout << endl;
        return;
    }
    cout << "Invalid postion ";
}

int main(){
    cout << "\n\n";
    char str1[25];
    cout<<"Enter the String ";
    cin >> str1;
    SubString(str1);
    return 0;
}