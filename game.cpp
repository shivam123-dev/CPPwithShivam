#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    vector<int>freq;
    for(int i=0;i<n;i++) {
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] < arr[j]) {
                count++;
            }
        }
        freq.push_back(count);
    }    
    int maxi = freq[0];
    for(int i=1;i<freq.size();i++) {
        maxi = max(maxi, freq[i]);
    }
    cout << maxi << endl;
    return 0;
}