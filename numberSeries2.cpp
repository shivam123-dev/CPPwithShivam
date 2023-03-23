#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int first = 1, second = 1;
    v.push_back(first);
    v.push_back(second);
    int n;
    cin >> n;
    if (n == 1 || n == 2)
        cout << v[n-1] << endl;
    else
    {
        for (int i = 3; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                first *= 2;
                v.push_back(first);
            }
            else
            {
                second *= 3;
                v.push_back(second);
            }
        }
    }
    cout << v[n-1] << endl;
    return 0;
}