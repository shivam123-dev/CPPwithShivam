#include<iostream>
using namespace std;
int calc(int n, int p){
    if(p == 0){
        return 1;
    }
    int ans = calc(n, p-1);
    return n * ans;
}
int main(){
    int n, p;
    cin >> n >> p;
    cout << calc(n, p) << endl;
    return 0;
}