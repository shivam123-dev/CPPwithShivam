#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, M, R;
    cin >> N >> M >> R;
    int in[N], out[M];
    int rIn = 0, rOut = 0;
    for(int i=0;i<N;i++) {
        cin >> in[i];
        rIn += in[i]-R;
    }
    for(int i=0;i<M;i++) {
        cin >> out[i];
        rOut += out[i] - R;
    }
    if(rIn == rOut) {
        cout << "BALANCED" << endl;
    }
    else {
        int rate = rIn-rOut;
        cout << rate << endl;
    }
    return 0;
}