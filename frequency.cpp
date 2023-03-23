#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    char find;
    cin >> find;
    for (auto x : mp)
    {
        if (x.first == find)
        {
            cout << x.second << endl;
            break;
        }
    }
    return 0;
}