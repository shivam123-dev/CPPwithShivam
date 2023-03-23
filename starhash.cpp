#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int c_star = 0, c_hash = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '*')
        {
            c_star++;
        }
        else if (s[i] == '#')
        {
            c_hash++;
        }
    }
    cout << c_star - c_hash;
    return 0;
}