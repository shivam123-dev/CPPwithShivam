#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0;
    vector<int> v;
    int first = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            a += 2;
            v.push_back(a);
        }
        else
        {
            b = a / 2;
            v.push_back(b);
        }
    }
    // for(int i=0;i<n;i++) {
    //     cout << v[i] << " ";
    // }
    cout << v[n - 1] << endl;
    return 0;
}