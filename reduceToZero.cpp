#include<bits/stdc++.h>
using namespace std;
int operationsCount(int n, int count) {
    if(n == 1) {
        return (count+1);
    }
    int res = 0;
    for(int i=1;i<n;i++) {
        if(n%i == 0) {
            res = i;
        }
    }
    return operationsCount(n-res, count+1);
}
int main() {
    int n;
    cin >> n;
    cout << operationsCount(n, 0) << endl;
    return 0;
}