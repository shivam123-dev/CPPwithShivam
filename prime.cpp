#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if(n == 0 || n == 1)
        return false;
    for(int i=2;i<(n/2);i++)
        if(n%i == 0)
            return false;
    return true;
}
int main() {
    int n;
    cin >> n;
    if(n < 0) {
        cout << "Please enter the positive number" << endl;
    }
    else {
        if(isPrime(n))
            cout << "Prime Number";
        else 
            cout << "Not Prime";
        return 0;
    }
}