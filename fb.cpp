#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string f = s.substr(1, s.length()) + s.substr(0, 1);
    string b = s.substr(s.length() - 1, s.length()) + s.substr(0, s.length() - 1);
    cout << (f == b) << endl;
    return 0;
}