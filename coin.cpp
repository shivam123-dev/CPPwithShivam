#include<bits/stdc++.h>
using namespace std;
int combinations(int m) {
    if(m == 0)
        return 1;
    if(m == 1) 
        return 1;
    if( m == 2)
        return 2;
    return combinations(m-1)+combinations(m-3);
}
int main() {
    int n;
    cin >> n;
    cout << combinations(n) << endl;
    return 0;
}