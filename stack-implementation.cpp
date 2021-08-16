// Self-Implementation of stack using array
#include <iostream>
using namespace std;
bool isEmpty(int top)
{
    if (top == 0)
    {
        return true;
    }
    return false;
}
bool isFull(int top, int n)
{
    if (top == n)
    {
        return true;
    }
    return false;
}
int push(int data, int *arr, int n, int top = -1)
{
    if (isFull(top, n))
    {
        cout << "Stack is full" << endl;
        return top;
    }
    top++;
    arr[top] = data;
    cout << "Insertion performed" << endl;
    return top;
}
int pop(int top, int *arr)
{
    if (isEmpty(top))
    {
        cout << "Stack is empty" << endl;
        return top;
    }
    arr[top] = 0;
    top--;
    cout << "Popped the topmost element" << endl
         << "Elements of the array are: " << endl;
    for (int i = 0; i < top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return top;
}
void peek(int top, int *arr, int index)
{
    while (top)
    {
        if (top > index)
        {
            top--;
        }
        if (top == index)
        {
            cout << "Element at " << index << " is: " << arr[top] << endl;
            return;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int top = 4;

    // Finding whether stack is full or not
    if (isEmpty(top))
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }
    // if (isFull(top,n))
    {
        cout << "The stack is full" << endl;
    }
    else
    {
        cout << "The stack is not full" << endl;
    }

    // Popping an element from the stack

    top = pop(top, arr);

    // Pushing an element in stack

    top = push(34, arr, n, top);

    // Peek Operation in stack

    peek(top, arr, 2);

    return 0;
}