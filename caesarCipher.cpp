#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int key;
    cin >> key;
    if(key < 0) {
        cout << "INVALID INPUT" << endl;
    }
    else {
        string res = "";
        for(int i=0;i<s.length();i++) {
            if(s[i]!=' ') {
                int a = (int)s[i]+key;
                char b = (char)a;
                res += b; 
            }
            else {
                res += s[i];
            }
        }
        cout << res << endl;
    }
    return 0;
}