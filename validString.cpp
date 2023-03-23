#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count_star = 0, count_hash = 0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='*') {
            count_star++;
        }
        else if(s[i] == '#') {
            count_hash++;
        }
    }
    cout << (count_star - count_hash) << endl;
    return 0;
}