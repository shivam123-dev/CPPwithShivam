#include<iostream>
using namespace std;
int firstOccurrence(int *arr, int n, int key, int i){
    if(i == n)
        return -1;
    if(arr[i] == key){
        return i;
    }
    return firstOccurrence(arr, n, key, i+1);
}
int lastOccurrence(int *arr, int n, int key, int i){
    if(i == n){
        return -1;
    }
    int a = lastOccurrence(arr, n, key, i+1);
    if(a!=-1){
        return a;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int key;
    cin >> key;
    cout << firstOccurrence(arr, n, key, 0) << endl;
    cout << lastOccurrence(arr, n, key, 0) << endl;
    return 0;
}