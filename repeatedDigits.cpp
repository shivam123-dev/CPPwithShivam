#include<bits/stdc++.h> 
using namespace std;
bool repeatedDigits(int num) {
    map<int, int> mp;
    while(num) {
        mp[num%10]++;
        num/=10;
    }
    for(auto x:mp) {
        if(x.second > 1)
            return false;
    }
    return true;
}
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;
    for(int i=n1;i<=n2;i++) {
        if(repeatedDigits(i)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}