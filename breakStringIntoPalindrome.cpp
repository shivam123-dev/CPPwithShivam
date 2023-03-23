#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
    int i = 0, j = s.length()-1;
    while(i <= j) {
        if(s[i] != s[j])
            return false;
    }
    return true;
}
int main() {
    string s;
    cin >> s;
    int n = s.length();
    for(int i=0;i<n;i++) {
        string s1 = s.substr(0, i);
        if(isPalindrome(s1)) {
            for(int j=i;j<n-i;j++) {
                string s2 = s.substr(i, i+j);
                string s3 = s.substr(i+j, n);
                if(isPalindrome(s2) and isPalindrome(s3)) {
                    cout << s1 << endl << s2 << endl << s3 << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Impossible" << endl;
    return 0;
}