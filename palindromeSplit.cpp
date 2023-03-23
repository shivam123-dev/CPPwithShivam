#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(const string word) {
    return equal(word.begin(), word.begin()+word.size()/2, word.rbegin());
}
string PalindromeSplit(string str) {
    int n = str.length();
    for(int i=1;i<n-1;i++) {
        string leftPart = str.substr(0, i);
        if(isPalindrome(leftPart)) {
            for(int j=i+1;j<n;j++) {
                string midPart = str.substr(i, j-i);
                if(isPalindrome(midPart)) {
                    string rightPart = str.substr(j, n-j);
                    if(isPalindrome(rightPart)) {
                        return leftPart + "\n" + midPart + "\n" + rightPart;
                    }
                }
            }
        }
    }
    return "Impossible";
}
int main() {
    string s;
    cin >> s;
    cout << PalindromeSplit(s) << endl;
    return 0;
}