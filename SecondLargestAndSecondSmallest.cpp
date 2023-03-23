#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    if(n <= 1)
        cout << "-1\n-1" << endl;
    else {
        set<int>st;
        for(int i=0;i<n;i++)
            st.insert(arr[i]);
        vector<int>v;
        for(auto x:st) {
            v.push_back(x);
        }
        cout << v[1] << endl << v[n-2] << endl;
    }   
    return 0; 
}