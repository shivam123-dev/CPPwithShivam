#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "";
    cin >> s;
    string str = "HSL";
    int count = 0;
    for(int i=0;i<s.length();i++) {
        if(s[i] == str[0]) {
            int k = 1, f = 0;
            for(int j=i+1, k=1;j<s.length(), k<str.length();j++, k++) {
                if(s[j] != str[k]){
                    f = 1;
                    break;
                }
            }
            if(f == 0) {
                count++;
            }
        }
    }
    cout << count;
}