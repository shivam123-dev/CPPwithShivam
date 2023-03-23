#include<bits/stdc++.h>
using namespace std;
bool check(int num) {
    int temp = num;
    while(temp) {
        if(temp%10 == 9) {
            return false;
        }
        temp /= 10;
    }
    return true;
}
int main() {
    string s;
    getline(cin, s);
    vector<int> arr;
    for(int i=0;i<s.length();) {
        if(isdigit(s[i])) {
            int res = 0, j = i;
            while(isdigit(s[j])) {
                res = res*10 + s[j]-'0';
                j++;
            }
            if(check(res))
                arr.push_back(res);
            i = j;
        }
        else {
            i++;
        }
    }
    sort(arr.begin(),arr.end());
    cout << arr[arr.size()-1] << endl;
    return 0;
}