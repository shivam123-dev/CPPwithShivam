/*
    number of employees who solved only first, only second and only third are equal.

    p1 employees solved first, second problems
    p2 employees solved second, third problems
    p3 employees solved third, first problems
    q employees solved all 3 problems
    r employees did not participate in competition

    How many employees solved the first problem?
    How many employees solved exactly one of 3 problems?

    Example 1:

    Input
    30 ->p1
    26 ->p2
    28 ->p3
    14 ->q
    345 ->total population
    43 -> r
    Output
    126
    246
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int p1, p2, p3, q, tot, r;
    cin >> p1 >> p2 >> p3 >> q >> tot >> r;
    // employees solved first problem
    int a = ((tot-r)+(p1+p2+p3)-q)/3;
    cout << a+2 << endl;
    // employees solving exactly 1/3
    int b = a*3 - (p1+p2+p3)+q;
    cout << b << endl;
    return 0;
}