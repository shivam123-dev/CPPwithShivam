#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {20, 30, 40, 50, 2, 3, 14};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] < 17) {
            sum += 200;
        }
        else if(arr[i] >= 17 && arr[i] <= 40) {
            sum += 400;
        }
        else if(arr[i] > 40) {
            sum += 300;
        }
    }
    if(sum == 0)
        cout << "INVALID INPUT" << endl;
    else
        cout << "Total Income " << sum << " INR" << endl;
    return 0;
}