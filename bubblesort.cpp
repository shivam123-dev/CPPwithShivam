// BubbleSort.cpp
#include <iostream>
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;
	// cout<<"Enter a number : ";
	cin>>n;
	int *arr = new int [n];
	// int arr[1000];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"The array before sorting: \n";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-i-1; j++) {
			if(arr[j]>arr[j+1]) {
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout<<"The elements of the array after sorting : \n";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
