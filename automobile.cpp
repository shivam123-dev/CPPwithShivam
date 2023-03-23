#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    cin >> v;
    int w;
    cin >> w;
    if(2 <= w and w%2 == 0 and v<w) {
        int tw = ((4*v)-w)/2;
        int fw = (w-(2*v))/2;
        cout << "TW = "<< tw << " FW = " << fw << endl;
    }
    else {
        cout << "INVALID INPUT" << endl;
    }
    return 0; 
}