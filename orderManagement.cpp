#include<bits/stdc++.h>
using namespace std;
int main() {
    int itemNumber[4] = {101, 102, 103, 108};
    float price[4] = {42, 50, 500, 40};
    int stock[4] = {10, 20, 15, 16};
    int item, quantity;
    cin >> item >> quantity;
    int f = 0;
    for(int i=0;i<4;i++) {
        if(item == itemNumber[i]) {
            f = 1;
            if(quantity <= stock[i]) {
                cout << "Total price = " << quantity*price[i];
                stock[i] -= quantity;
                break;
            }
            else {
                cout << "NO STOCK and quantity left";
                break;
            }
        }
    }
    if(f == 0) {
        cout << "INVALID INPUT" << endl;
    }

    return 0;
}