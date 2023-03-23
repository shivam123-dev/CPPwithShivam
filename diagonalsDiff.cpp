#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> arr[i][j];
        }
    }
    int ld = 0, rd = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i == j) {
                ld += arr[i][j];
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i == j || i == n-1 || j == n-1) {
                rd += arr[i][j];
            }
        }
    }
    cout << abs(ld-rd);
}