#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int entry[t], exit[t];
    for(int i=0;i<t;i++) {
        cin >> entry[i];
    }
    for(int i=0;i<t;i++) {
        cin >> exit[i];
    }
    vector<int>res;
    int sum = 0;
    for(int i=0; i<t; i++) {
        sum += entry[i]-exit[i];
        res.push_back(sum);
    }
    int maxi = res[0];
    for(int i=1;i<res.size();i++) {
        if(maxi < res[i]) {
            maxi = res[i];
        }
    }
    cout << maxi << endl;
    return 0;
}