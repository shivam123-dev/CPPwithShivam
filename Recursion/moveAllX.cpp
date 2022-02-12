#include<iostream>
using namespace std;
string finalString(string s){
    if(!s.length())
        return "";
    char a = s[0];
    string b = finalString(s.substr(1));
    if(a == 'x')
        return b+a;
    return a+b;
}
int main(){
    string s;
    cin >> s;
    cout << finalString(s) << endl;
    return 0;
}