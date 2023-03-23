#include<bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    while(k > 0) {
        int temp = arr[n-1];
        int temp1 = arr[0];
        for(int i=1;i<n;i++) {
            int t = arr[i];
            arr[i] = temp1;
            temp1 = t;
        }
        arr[0] = temp;
        k--;
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}