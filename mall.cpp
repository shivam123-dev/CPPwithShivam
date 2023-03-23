#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c] = {0};
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> arr[i][j];
        }
    }
    int res[r]= {0};
    for(int i=0;i<r;i++) {
        int count = 0;
        for(int j=0;j<c;j++) {
            if(arr[i][j] == 1) {
                count++;
            }
        }
        res[i] = count;
    }
    int maxi = res[0];
    for(int i=1;i<r;i++) {
        maxi = max(maxi, res[i]);
    }
    for(int i=0;i<r;i++) {
        if(maxi == res[i]) {
            cout << i+1 << endl;
            break;
        }
    }
}