#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    // for(int i=0;i<n;i++)
    //     cout << arr[i] << " ";
    // cout << endl;
    if(arr[0] >= 0) {
        cout << arr[0] << endl;
    } 
    else {
        int max = arr[n-1], min = arr[0], i=1;
        while((max-min) == 0 && i < n-1) {
            min = arr[i];
            if(max-min != 0)
                break;
            cout << 1 << endl;
            i++;
        }
        // cout << max << endl << min << endl;
        cout << (max+min) << endl;
    }
    return 0;
}