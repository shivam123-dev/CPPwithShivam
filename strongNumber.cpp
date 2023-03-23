#include<bits/stdc++.h>
using namespace std;
int findFactorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n*findFactorial(n-1);
}
int main() {
    int n;
    cin >> n;
    int sum = 0;
    while(n > 0) {
        int fact = 1;
        int temp = n%10;
        temp = findFactorial(temp);
        sum += temp;
    }
    if(sum == n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}