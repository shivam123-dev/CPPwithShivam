#include<bits/stdc++.h>
using namespace std;
int iterations(int n, int count) {
    if (n < 10)
    {
        return count;
    }
    else {
        int temp = n;
        int sum = 0;
        while(temp > 0) {
            sum += temp%10;
            temp /= 10;
        }
        n = sum;
    }
    return iterations(n, ++count);
}
int main()
{
    int n;
    cin >> n;
    cout << "Number of steps required to reach single digit : " << iterations(n, 0) << endl;
    return 0;
}