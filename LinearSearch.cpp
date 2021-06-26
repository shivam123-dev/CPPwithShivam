// Program for performing linear search in array
#include <iostream>
using namespace std;
int linearSearch(int *arr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int elementToSearch;
    cout << "Enter the element to search: ";
    cin >> elementToSearch;
    if (linearSearch(arr, size, elementToSearch))
    {
        cout << "Element is found" << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }
    return 0;
}