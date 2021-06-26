#include<iostream>
using namespace std;
void display(int* arr, int size)
{
    for(int i=0;i<size;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
void insert(int* arr, int size, int element, int pos)
{
    for(int i=size-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = element;
    size += 1;
    cout << "The array after insertion is: ";
    display(arr, size);
}
void del(int* arr, int size, int pos){
    for(int i=pos;i<=size-1;i++){
        arr[i] = arr[i+1];
    }
    size -= 1;
    cout << "The array after deletion is: ";
    display(arr, size);
}
int main()
{
    int size, element, index;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int [size];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter the element to be inserted and it's position: ";
    cin >> element >> index;
    insert(arr, size, element, index);
    cout << "Enter the position whose element is to be deleted: ";
    cin >> index;
    del(arr, size, index);
    return 0;
}