#include<iostream>
using namespace std;
void replacePi(string s){
    if(s.length()==0)
        return;
    string check = "";
    check += s[0] + s[1];
    string a = "3.14";
    if(check == "pi"){
        cout << a;
        replacePi(s.substr(2));
    }
    else{
        cout << s[0];
        replacePi(s.substr(1));
    }
}
int main()
{
    string s;
    cin >> s;
    replacePi(s);
    return 0;
}