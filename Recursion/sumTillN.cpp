#include<iostream>
using namespace std;
// Method 1
// int sumTillN(int n, int sum=0){
//     if(n==0){
//         sum+=n;
//         return sum;
//     }
//     int prevSum = sumTillN(n-1, sum+1);
//     return sum + prevSum;
// }
// Method 2
int sumTillN(int n){
    if(n==0)
        return 0;
    int prevSum = sumTillN(n-1);
    return n + prevSum;
}
int main(){
    int n;
    cin >> n;
    cout << sumTillN(n) << endl;
    return 0;
}