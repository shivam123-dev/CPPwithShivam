#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *arr= new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    map<int, int>mp;
    for(int i=0;i<n;i++) {
        mp[arr[i]]++;
    }
    for(auto x:mp) {
        if(x.second %2 != 0) {
            cout << x.first << endl;
            break;
        }
    }
    return 0;
}