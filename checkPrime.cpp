#include<iostream>     //header file
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%2==0)
        {
            cout<<"not prime";
            return 0;
        }
    }
    cout<<"prime";

    return 0;
}
