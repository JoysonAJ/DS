#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

int Evaluvation(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++){
        if( s[i] >= '0' && s[i] <= '9' ){
            st.push(s[i]-'0');
        }   
        else {
            int op2 = st.top();
            st.pop();

            int op1 = st.top();
            st.pop();

            switch(s[i]){
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
                case '^':
                    st.push(pow(op1, op2));
                    break;
            }
        }
    }
    return st.top();
}

int main() {
    char str[30];
    // cout << "Enter The Postfix expression ";
    // cin >> str;
    // cout << "The Result \t" << Evaluvation(str) << endl;
    cout << "The Result \t" << Evaluvation("46+2/5*7+") << endl;
    return 0;
}