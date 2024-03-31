#include<iostream>
using namespace std;

int StringCount(char str[]){
    int sz =0;
    for(int i=0;str[i] !='\0';i++){
        sz++;
    }
    return sz;
}

void Concate(char str1[],char str2[]){

    int len1 = StringCount(str1);
    int len2 = StringCount(str2);

    char str3[len1 + len2];
    int j = 0;

    for (int i = 0; i < (len1 + len2);i++){
        if(i<len1)
            str3[i] = str1[i];
        else
            str3[i] = str2[j++];
    }

    for (int i = 0; i < (len1 + len2); i++){
        cout << str3[i];
    }
    cout << "\n\n";
}

int main(){
    char str1[25],str2[25];
    cout<<"Enter the String1 ";
    cin >> str1;
    cout << "Enter the String 2 ";
    cin >> str2;
    Concate(str1,str2);
    return 0;
}