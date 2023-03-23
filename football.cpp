#include<bits/stdc++.h>
using namespace std;
long strtoi(string s) {
    long res = 0;
    for(int i=0;i<s.length();i++) {
        res = res*10 + (s[i]-'0');
    }
    return res;
}
int main() {
    int n;
    cin >> n;
    map<char, long>team;
    vector<int> temp;
    for(int i=0;i<n;i++) {
        char a, b;
        cin >> a >> b;
        string score;
        cin>> score;
        string delimiter = "-";
        string score1, score2;
        score1 = score.substr(0, score.find(delimiter));
        score2 = score.substr(score.find(delimiter)+1, score.size());
        long m = strtoi(score1);
        long n = strtoi(score2);
        team[a]=max(team[a], m);
        team[b]=max(team[b], n);
    }
    int large = INT_MIN;
    for(auto x:team) {
        if(large < x.second) {
            large = x.second;
        }
    }
    for(auto x:team) {
        if(large == x.second) {
            cout << x.first << endl << x.second << endl;
            break;
        }
    }
    return 0;
}