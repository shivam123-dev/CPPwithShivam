#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n > 1000000 || n<0) {
        cout << "Wrong Input" << endl;
    } else {
        int res = 0;
        while(n > 0) {
            int rem = abs(9-(n%10));
            res = (res*10) + rem;
            n /= 10;
        }
        n = 0;
        while(res > 0) {
            n = (n*10) + res%10;
            res /= 10;
        }
        cout << n << endl;
    }
}