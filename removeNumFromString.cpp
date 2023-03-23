#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string res = "";
    for(int i=0;i<s.length();i++) {
        if(s[i] != '7' or (s[i]!='5' and s[i+1]!='6')) {
            res += s[i];
        }
    }
    cout << res;
    return 0;
}