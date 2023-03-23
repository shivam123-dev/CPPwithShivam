#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    int left_to_right = 0, right_to_left = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                left_to_right += arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (j == n - i - 1)
            {
                right_to_left += arr[i][j];
            }
        }
    }
    cout << abs(left_to_right - right_to_left) << endl;
}