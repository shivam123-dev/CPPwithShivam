#include<iostream>
using namespace std;
int fibo(int n){
    if(n == 0 or n == 1){
        return 1;
    }
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}