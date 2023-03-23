#include<bits/stdc++.h>
using namespace std;
int main() {
    long a;
    int i=9;
    cin >> a;
    stack<int> st;
    while(i>=2) {
        if(a%i == 0) {
            st.push(i);
        }
        i--;
    }
    int res = 0;
    while(!st.empty()) {
        res = res*10 + st.top();
        st.pop();
    }
    cout << res << endl;
    return 0;
}






















// #include<bits/stdc++.h>
// using namespace std;
// bool check(int num, int a) {
//     int pro = 1;
//     while(num) {
//         pro *= num%10;
//         num/=10;
//     }
//     return pro == a;
// }
// int main() 
// {
//     int a;
//     cin >> a;
//     int i=11;
//     while(true) {
//         if(check(i, a)) {
//             cout << i << endl;
//             break;
//         }
//         i++;
//     }
//     return 0;
// }