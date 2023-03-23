#include<bits/stdc++.h>
using namespace std;
int main() {
    int in;
    cin >> in;
    int ex;
    cin >> ex;
    float* arr = new float[in];
    for(int i=0;i<in;i++) {
        cin >> arr[i];
    }
    float* brr = new float[ex];
    for(int i=0;i<ex;i++) {
        cin >> brr[i];
    }
    float tot = 0;
    for(int i=0;i<in;i++) {
        tot += arr[i] * 18;
    }
    for(int i=0;i<ex;i++) {
        tot += brr[i] * 12;
    }
    cout << "Total estimated Cost : " << tot << " INR" << endl;
}