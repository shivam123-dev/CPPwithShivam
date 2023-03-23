#include<bits/stdc++.h>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> arr[i][j];
        }
    }
    int sum[r];
    for(int i=0;i<r;i++) {
        int s = 0;
        for(int j=0;j<c;j++) {
            s += arr[i][j];
        }
        sum[i] = s;
    }
    int pos = 0, maxi = sum[0];
    for(int i=1;i<r;i++) {
        if(maxi < sum[i]) {
            pos = i;
            maxi = sum[i];
        }
    }
    cout << pos+1 << endl;
    return 0;
}