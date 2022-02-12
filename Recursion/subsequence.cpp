#include<iostream>
using namespace std;
void print(string s, string ans=""){
    if(s.length()==0){
        cout << ans << endl;
        return;
    }
    char a = s[0];
    string res = s.substr(1);
    print(res, ans);
    print(res, ans+a);
}
int main()
{
    string s;
    cin >> s;
    print(s);
    return 0;
}