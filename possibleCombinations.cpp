#include<bits/stdc++.h>
using namespace std;
int combinations(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    if(n == 2) {
        return 2;
    }
    return combinations(n-1)+combinations(n-3);
}
int main() {
    int n;
    cin >> n;
    cout << combinations(n) << endl;
    return 0;
}