#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0, num = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            num = num * 10 + (str[i] - '0');
        }
        else
        {
            count++;
        }
    }
    if (num == count)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}