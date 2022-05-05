#include<iostream>
using namespace std;

int StringCount(char str1[]){
    int cunt=0;
    for(int i=0; str1[i] != '\0';i++){
        cunt++;
    }
    cout << "\nNumber of the string : "<< cunt ;
    cout << endl ;
    return cunt;
}

void ReverseString(char str1[]){
    int rev = StringCount(str1);
    cout<<"\n-----------------------------\n";
    for (int i = rev; i >= 0; i--){
        cout << str1[i];    
    }
    cout << endl;
}

void ConcateString(char str1[]){

    int j=0,i,len1,len2;
    char str2[20],str3[20];
    cout << "Enter the string 2 : ";
    cin >> str2;
    len1 = StringCount(str1);
    len2 = StringCount(str2);    
    for (int i = 0; i < (len1 + len2);i++){
            if(i<len1)
                str3[i]=str1[i];
            if(i>=len1 && i<(len1+len2) ){
                str3[i]=str2[j];
                j++;
            }
    }
    for (i = 0; i < (len1 + len2);i++){
        cout << str3[i] ;
    }
    cout << endl;
}

void StringCompare(char str1[]){
    int len1,len2;
    char str2[20];
    
    cout << "Enter the string 2 : ";
    cin >> str2;
    len1 = StringCount(str1);
    len2 = StringCount(str2);

    if(len1 != len2){
        cout<<str1<<" Is Not Equal (length) to "<<str2<<endl;
        return;
    }
    for(int i = 0 ;i < len1;i++){
        if(str1[i] != str2[i] ){
            cout<<"String not Matching \n Not equal";
            return;
        }
    }
    cout<<"Equal";
}

void SubString(char str1[]){
    int StartPos,EndPos,len1;
    len1 = StringCount(str1);
    cout << "Enter the Starting position";
    cin >> StartPos;
    cout << " Enter the ending Pos ";
    cin >> EndPos;
    if( (StartPos > EndPos) || (0 <= StartPos && EndPos < len1) ){
        for (int i = StartPos; i < EndPos; i++){
            cout << str1[i] << "";
        }
        cout << endl;
        return;
    }
    cout << "Invalid postion ";
}

void SubPosStr(char str1[]){
    int len1, len2;
    bool flag;
    char str2[25];
    cout << "Enter the Substring ";
    cin>>str2;

    len1 = StringCount(str1);
    len2 = StringCount(str2);

    if (len1 < len2){
        cout << "Substring Larger than Main String ";
        return;
    }
    int loc =0;
    int ct=0;
    for(int i =0;i<len1;i++){
        if(str1[i] == str2[i]){
            ct=1;
            for(int j=i;j<(i+len2);j++){
                loc = i;
                if(str1[i] == str2[i]){
                    ct++;
                }
                if(ct == len2) {
                    loc = i + 1 -ct;
                    ct = j;
                    
                    flag = true;
                    break;
                
                }
            }
        }
    }
    if(flag == true){
    cout<<"Start location "<<loc ;
    cout<<"\nEning Location is "<<ct;
    }
    else
        cout<<"Invalid Substring";
}

int main(){
    int ch;
    char str1[20];
    // string str1,str2,str3;
    cout << " Enter The Main String :";\
    cin>>str1;
    do{
        cout << "\n1.Concation with  string2  ";
        cout << "\n2.Compare the String ";
        cout << "\n3.Reverse  the String ";
        cout << "\n4.Substring ";
        cout << "\n5.Position of the substring";
        cout << "\n Enter the choice :";
        cin >> ch;
        switch(ch){
            case 1:
                ConcateString(str1);
                break;
            case 2:
                StringCompare(str1);
                break;
            case 3:
                ReverseString(str1);
                break;
            case 4:
                SubString(str1);
                break;
            case 5:
                SubPosStr(str1);
                break;
        }
    }while( ch < 6 );
    return 0;
}