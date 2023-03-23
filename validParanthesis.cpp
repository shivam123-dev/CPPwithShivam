#include<bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    if (s.length() == 1 && (s[0] == ']' || s[0] == '}' || s[0] == ')'))
        return false;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == '{')
        {
            st.push('{');
        }
        else if (s[i] == '[')
        {
            st.push('[');
        }
        else
        {
            continue;
        }
    }
    while(!st.empty()) {
        char rem = st.top();
        for(int i=s.length()-1;i>=0;i--) {
            if (s[i] == ']' && rem == '[')
            {
                st.pop();
            }
            else if (s[i] == '}' && rem == '{')
            {
                st.pop();
            }
            else if (s[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    if (st.empty() == true)
        return true;
    else
        return false;
}
int main() {
    string s = "}(";
    cout  << isValid(s);
    return 0;
}