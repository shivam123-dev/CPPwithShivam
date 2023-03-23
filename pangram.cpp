#include<bits/stdc++.h>
using namespace std;
bool isPanagram(string s) {
    for(int i=0;i<s.length();i++) {
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i]>='A' && s[i]<'Z')||(s[i]==' ')) {
            continue;
        }
        else
            return false;
    }
    return true;
}
int main() {
    string s;
    getline(cin,s);
    if(isPanagram(s)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}