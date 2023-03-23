#include<bits/stdc++.h>
using namespace std;
bool compare(pair<char, int> &a, pair<char, int> &b) {
    return a.second < b.second;
}
int main() {
    string s;
    getline(cin, s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    map<char, int>mp;
    for(int i=0;i<s.length();i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            mp[s[i]]++;
    }
    
    vector<pair<char, int> > A;
    for(auto &it:mp) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), compare);
    mp.clear();
    for(auto x:A) {
        mp.insert(x);
    }
    int pos = 0;
    for(auto x:mp) {
        if(pos == 1) {
            cout << x.first << endl;
            break;
        }
        pos++;
    }
}