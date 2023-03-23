#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> n;
    int start, end;
    cin >> start >> end;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cout << 1 << " ";
        if (arr[i] >= start && arr[i] <= end)
        {
            st.push(arr[i]);
        }
    }
    int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    cout << sum;
    return 0;
}