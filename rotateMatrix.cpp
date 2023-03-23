#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    int newArr[n][n];
    int k = n-1, z=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            newArr[i][j] = arr[k--][z];
        }
        k = n-1;
        z++;
    }
    cout << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) 
            cout << newArr[i][j] << " ";
        cout << endl;
    }
    return 0;
}