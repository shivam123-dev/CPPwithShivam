#include <iostream>
using namespace std;
bool binarySearch(int *a, int size, int element)
{
    int low = 0, high = size - 1, mid;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (a[mid] == element)
        {
            return true;
        }
        if (a[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}
int main()
{
    int size, element;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> element;
    if (binarySearch(arr, size, element))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}