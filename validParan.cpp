#include<bits/stdc++.h>
using namespace std;
bool isValid(string str) {
    stack<char> st;
    for(int i=0;i<str.length();i++) {
        if(str[i] == '(') {
            st.push(str[i]);
        }
        else if(str[i] == ')') {
            if(st.empty() or st.top() != '(')
                return false;
            st.pop();
        }
        else if(str[i] == '{') {
            st.push(str[i]);
        }
        else if(str[i] == '}') {
            if(st.empty() or st.top() != '{') 
                return false;
            st.pop();
        }
        else if(str[i] == '[') {
            st.push(str[i]);
        }
        else if(str[i] == ']') {
            if(st.empty() or st.top() != '[') 
                return false;
            st.pop();
        }
    }
    return st.empty();
}
int main() {
    string s;
    getline(cin, s);
    if(isValid(s)) 
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}