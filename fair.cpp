#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto x : mp)
    {
        if (x.second % 2 != 0)
        {
            cout << x.first << endl;
            return 0;
        }
    }
    return 0;
}