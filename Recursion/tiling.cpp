#include<iostream>
using namespace std;
int tiling(int n){
    if(n == 0 or n == 1)
        return n;
    return tiling(n-1) + tiling(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << tiling(n) << endl;
    return 0;
}