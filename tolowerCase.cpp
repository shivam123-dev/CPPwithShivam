// tolowerCase.cpp
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "ABCDSwerweKEUHTRIWEURHIWER";
    string res = "";
    for(int i=0;i<s.length();i++) {
        char ch = s[i];
        ch = ::toupper(ch);
        res += ch;
    }
    int a = 12313123;
    string r1 = ::to_string(a);
    // cout << res << endl;
    cout << r1 << endl;
    return 0;
}
