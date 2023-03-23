#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);
    int max_price = arr[0], min_price = arr[0];
    for(int i=1;i<n;i++) {
        max_price = max(max_price, arr[i]);
        min_price = min(min_price, arr[i]);
    }
    int f=0;
    for(int i=0;i<n;i++) {
        if(arr[i] == max_price) {
            for(int j=0;j<i;j++) {
                if(arr[j] == min_price) {
                    cout << max_price - min_price;
                    f=1;
                }
            }
        }
    }
    if(f==0)
    {
        
    }
    return 0;
}