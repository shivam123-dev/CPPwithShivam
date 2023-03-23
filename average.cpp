#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    float sum = 0; 
    int count = 0;
    for(int i=0;i<n;i++) {
        sum += (float)arr[i];
        count++;
    }
    cout << "Average number = " << (sum/count) << endl;
    return 0;
}