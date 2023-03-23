#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}