#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n = 10, k = 5;
    cin >> t;
    if(t < 1 || t > n) {
        cout << "INVALID INPUT" << endl
            << "NUMBER OF CANDIES LEFT: 10" << endl;
    }
    if(t>=1 and t<=k){
        cout << "NUMBER OF CANDIES SOLD : " << t << endl;
        cout << "NUMBER OF CANDIES AVAILABLE : " << n-t << endl;
    }
    return 0;
}