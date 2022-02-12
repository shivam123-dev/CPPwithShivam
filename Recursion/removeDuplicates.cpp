#include<iostream>
using namespace std;
string ans;
string remove(string s){
    if(!s.length())
        return "";
    char a = s[0];
    string ans = remove(s.substr(1));
    if(ans[0] == a)
        return ans;
    else
        return a+ans;    
}
int main()
{
    string s;
    cin >> s;
    cout << remove(s) << endl;
    return 0;
}