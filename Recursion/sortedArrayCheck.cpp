#include<iostream>
using namespace std;
bool isSorted (int *arr, int n, int i=0){
    if((i+1) == n){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    if(isSorted(arr, n, i+1)){
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    if(isSorted(arr, n)){
        cout << "Array is Sorted" << endl;
    }
    else{
        cout << "Array is not Sorted" << endl;
    }
    return 0;
}