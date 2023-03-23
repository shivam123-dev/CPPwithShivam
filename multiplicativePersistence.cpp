#include <bits/stdc++.h>
using namespace std;
int iterations(int n, int count)
{
    if (n < 10)
    {
        return count;
    }
    else
    {
        int pro = 1;
        while (n > 0)
        {
            pro *= n % 10;
            n /= 10;
        }
        n = pro;
    }
    return iterations(n, ++count);
}
int main()
{
    int n;
    cin >> n;
    cout << "It takes " << iterations(n, 0) << " iterations to reach a single-digit number." << endl;
    return 0;
}