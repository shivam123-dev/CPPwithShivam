#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int arr[5];
    for(int i=0;i<5;i++)
        cin >> arr[i];
    int mini = arr[0];
    for(int i=0;i<5;i++)
        if(mini > arr[i])
            mini = arr[i];
    cout << mini << endl;
    return 0;
}