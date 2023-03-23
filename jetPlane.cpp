#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cN = 0, cS = 0, cE = 0, cW = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'N')
        {
            cN++;
        }
        else if (s[i] == 'E')
        {
            cE++;
        }
        else if (s[i] == 'S')
        {
            cS++;
        }
        else if (s[i] == 'W')
        {
            cW++;
        }
    }
    if (cN == cS && cE == cW) 
    {
        cout << "Returned successfully";
    }
    else
    {
        cout << "Not returned successfully";
    }
    return 0;
}