#include<iostream>
using namespace std;
void subsequence(string s, string ans=""){
    if(s.length()==0){
        cout << ans << endl;
        return;
    }
    char a = s[0];
    string res = s.substr(1);
    subsequence(res, ans);
    subsequence(res, ans+a);
}
int main()
{
    string s;
    cin >> s;
    subsequence(s);
    return 0;
}