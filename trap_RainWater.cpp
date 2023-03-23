#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int* left = new int[n];
    int* right = new int[n];
    left[0] = arr[0], right[n-1] = arr[n-1];
    for(int i=1;i<n;i++) {
        left[i] = max(left[i-1], arr[i]);
    }
    for(int i=n-2;i>=0;i--) {
        right[i] = max(right[i], arr[i]);
    }
    int res = 0;
    for(int i=0;i<n;i++) {
        res += min(left[i], right[i])-arr[i];
    }
    cout << res << endl;
}