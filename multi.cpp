#include<bits/stdc++.h>
using namespace std;
int main() {
    long a;
    cin >> a;
    int f = 0;
    for(int i=10;i<=(a*a);i++) {
        long p = 1;
        long j = i;
        while(j) {
            p *= j%10;
            j /= 10;
        }
        if(p == a) {
            cout << i << endl;
            f = 1;
            break;
        }
    }
    if(f == 0) {
        cout << "Not Possible" << endl;
    }
    return 0;
}