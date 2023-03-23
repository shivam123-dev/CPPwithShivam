#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b) {
    return a.second < b.second;
}
int main() {
    int arr[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin >> arr[i][j];
        }
    }
    int max_avg = 0;
    map<int, int> mp;
    for(int i=0;i<3;i++) {
        int avg = 0, sum = 0;
        for(int j=0;j<3;j++) {
            sum += arr[i][j];
        }
        avg = sum/3;
        mp.insert(i+1, avg);
        if(max_avg < avg) {
            max_avg = avg;            
        }
    }
    vector<pair<int, int> > p;
    int i=0;
    for(auto x:mp) {
        p[i].first = x.first;
        p[i].second = x.second;
        i++;
    }
    sort(p.begin(), p.end(), cmp);
    cout << "Trainee Number : " << p[0].first << endl;
    cout << "Trainee Number : " << p[2].first << endl;
    return 0;
}