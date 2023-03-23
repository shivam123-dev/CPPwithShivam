#include<bits/stdc++.h>
using namespace std;
bool uniqueDigit(int num) {
    set<int> temp;
    int t = num;
    int a = 0;
    while(t > 0) {
        a = (a*10) + (t%10);
        t/=10;
    }
    while(a > 0) {
        temp.insert(a%10);
        a /= 10;
    }
    int res = 0;
    for(auto x:temp) {
        res = (res*10) + x;
    }
    return (res == num);
}
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;
    for(int i=n1;i<=n2;i++) {
        if(uniqueDigit(i)==true) {
            cout << i << endl;
            count++;
        }
    }
    cout << count << endl;
}