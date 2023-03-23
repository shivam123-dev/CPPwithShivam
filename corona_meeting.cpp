#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        long int n;
        cin >> n;
        n--;
        cout << (n*(n+1))/2 << endl;
    }
}