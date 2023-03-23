#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int c0 = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] == 0) {
            c0++;
        }
    }
    queue <int> q;
    for(int i=0;i<n;i++) {
        if(arr[i]!=0) {
            q.push(arr[i]);
        }
    }
    int k = 0;
    while(!q.empty()) {
        arr[k] = q.front();
        q.pop();
        k++;
    }
    while(c0-- > 0) {
        arr[k] = 0;
        k++;
    }
    for(int i=0;i<k;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}