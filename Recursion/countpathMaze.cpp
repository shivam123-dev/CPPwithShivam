#include<iostream>
using namespace std;
int countpath(int n, int i, int j){
    if(i == n-1 and j == n-1)
        return 1;
    if(i>n or j>n)
        return 0;
    return countpath(n, i+1, j) + countpath(n, i, j+1);
}
int main(){
    int n;
    cin >> n;
    cout << countpath(n, 0, 0);
    return 0;
}