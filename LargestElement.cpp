#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[5];
    for(int i=0;i<5;i++) {
        cin >> arr[i];
    }
    int maxi = arr[0];
    for(int i=0;i<5;i++) {
        if(maxi < arr[i]) {
            maxi = arr[i];
        }
    }
    cout << maxi << endl;
    return 0;
}