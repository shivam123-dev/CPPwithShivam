#include<iostream>
using namespace std;
// void rev(string s){
//     if(s.length()==0){
//         return;
//     }
//     string a = s.substr(1);
//     rev(a);
//     cout << s[0];
// }
void rev(string s, int i=0){
    if(i == s.length()){
        return;
    }
    char a = s[i];
    rev(s, i+1);
    cout << a;
}
int main(){
    string s;
    cin >> s;
    rev(s);
    return 0;
}