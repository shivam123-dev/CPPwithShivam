#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if(w == 0) {
        cout << "Time Estimated: 0 minutes" << endl;
    }
    else if(w >= 1 and w <= 2000) {
        cout << "Time Estimated: 25 minutes" << endl;
    }
    else if(w>=2001 and w<= 4000) {
        cout << "Time Estimated: 35 minutes" << endl;
    }
    else if(w>=4000 and w<=7000) {
        cout << "Time Estimated: 45 minutes" << endl;
    }
    else if(w>7000){
        cout << "OVERLOADED" << endl;
    }
    else {
        cout << "INVALID INPUT" << endl;
    }
    return 0;
}