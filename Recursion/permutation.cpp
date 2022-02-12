#include<iostream>
using namespace std;
void permutation(string s, string ans=""){
    if(s.length()==0){
        cout << ans << endl;
        return; 
    }
    for(int i=0;i<s.length();i++){
        char a = s[i];
        string res = s.substr(0, i) + s.substr(i+1);
        permutation(res, ans+a);
    }
}
int main()
{
    string s;
    cin >> s;
    permutation(s);
    return 0;
}