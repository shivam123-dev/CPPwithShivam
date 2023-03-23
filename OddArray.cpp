#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    vector<int>oddArr;
    for(int i=0;i<n;i++) {
        if(arr[i]%2!=0) {
            oddArr.push_back(arr[i]);
        }
    }
    for(int i=0;i<oddArr.size();i++)
        cout << oddArr[i] << " ";
    cout << endl;
    return 0;
}