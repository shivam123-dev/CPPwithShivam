#include<bits/stdc++.h>
using namespace std;
int main() {
    int N,M,P;
    cin >> N >> M >> P;
    int prof = (M*P)/100; 
    N-=2;
    while(N){
        prof = (prof*P)/100;
        N--;
    }
        cout << prof << endl;
    return 0;
}