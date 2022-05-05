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
    int len1, len2;
    bool flag;
    char str2[25];
    cout << "Enter the Substring";
    cin>>str2;

    len1 = StringCount(str1);
    len2 = StringCount(str2);

    if (len1 < len2){
        cout << "Substring Larger than Main String";
        return;
    }
    int loc =0;
    int ct=0;
    for(int i =0;i<len1;i++){
        if(str1[i] == str2[i]){
            ct=0;
            for(int j=i;j<(i+len2);j++){
                loc = i;
                if(str1[i] == str2[i]){
                    ct++;
                }
                if(ct == len2){
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag ==true){
    cout<<"Start location "<<loc ;
    cout<<"\nEning Location is "<<loc+(len2-1);
    }
    else
        cout<<"Invalid Substring";
}

int main(){
    cout << "\n\n";
    char str1[25];
    cout<<"Enter the String ";
    cin >> str1;
    SubString(str1);
    return 0;
}