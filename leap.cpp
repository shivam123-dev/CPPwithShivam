#include<bits/stdc++.h>
using namespace std;
int main() {
    int year;
    cin >> year;
    if(year%4 == 0) {
        if(year%100 == 0) {
            if(year%400 == 0) {
                cout << "Leap Year" << endl;
            }
            else {
                cout << "Not Leap Year" << endl;
            }
        }
        else {
            cout << "Not Leap Year" << endl;
        }
    }
    else {
        cout << "Not Leap Year" << endl;
    }
    return 0;
}