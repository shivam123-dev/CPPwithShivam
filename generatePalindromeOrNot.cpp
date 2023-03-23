#include <bits/stdc++.h>
using namespace std;
bool check(string s, map<char, int> mp)
{
    int count = 0;
    for (auto x : mp)
    {
        if (x.second < 2)
        {
            count++;
        }
    }
    if(count == 0 || count == 1)
        return true;
    return false;
}
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    if(check(s, mp)) {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
    return 0;
}