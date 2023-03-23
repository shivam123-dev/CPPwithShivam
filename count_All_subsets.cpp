#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int *arr = new int[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        int sum;
        cin >> sum;
        int c = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            a[i] = arr[i];
        vector<int> :: iterator it;
        for(int i=0;i<n;i++) {
            it = find(a.begin(), a.end(), sum-arr[i]);
            if(it!=a.end()) {
                c++;
            }
        }
        cout << c << endl;
    }
}