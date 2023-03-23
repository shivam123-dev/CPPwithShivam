#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    
    string b = s.substr(1, s.size())+s.substr(0, 1);
    string f = s[s.size()-1]+s.substr(0, s.size()-1);

    cout << (b==f) << endl;
    return 0;
}