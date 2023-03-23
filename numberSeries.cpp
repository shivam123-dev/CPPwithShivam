#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int oddSeries = 0, evenSeries = 0;
    vector<int> v;
    v.push_back(evenSeries);
    v.push_back(oddSeries);
    if(n == 1 || n == 2)
        cout << v[n-1] << endl;
    else {
        for (int i = 3; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                oddSeries += 7;
                v.push_back(oddSeries);
            }
            else if (i % 2 != 0)
            {
                evenSeries += 6;
                v.push_back(evenSeries);
            }
        }
    }
    cout << v[n-1] << endl;
    return 0;
}