#include<bits/stdc++.h>
using namespace std;
bool isUNO(int n) {
    if(n<=9) {
        if(n == 1)
            return true;
        return false;
    }
    else {
        int sum = 0;
        while(n > 0) {
            sum += n%10;
            n /= 10;
        }
        n = sum;
        return isUNO(n);
    }
}
int main() {
    int n;
    cin >> n;
    if(isUNO(n)) {
        cout << "UNO";
    }
    else {
        cout << "Not UNO";
    }
    return 0;
}