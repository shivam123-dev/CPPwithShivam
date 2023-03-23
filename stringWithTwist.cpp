#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c) {
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') 
        return true;
    return false;
}
int main() {
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    for(int i=0;i<s1.length();i++)
        if(isVowel(s1[i]))
            s1[i] = '%';
    for(int i=0;i<s2.length();i++)
        if(!isVowel(s2[i])) 
            s2[i] = '#';
    for(int i=0;i<s3.length();i++) 
        s3[i] = ::toupper(s3[i]);
    cout << s1+s2+s3 << endl;
    return 0;
}