#include<iostream>
using namespace std;
int main()
{
    int p,r,t;
    float si;
    cin>>p>>r>>t;
    //si=(p*r*t)/100;  :-int/int=int , so float of 0 =0.0
    si=(p*r*t)/100.00;  //int/float=float  ,as float has higher precedence.
    cout<<si;
    return 0;


}
