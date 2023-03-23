#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    cout << "Maximum element in array: " << maxi << endl;
    return 0;
}