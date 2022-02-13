#include<iostream>
using namespace std;
int knapsack(int n, int *value, int *weight, int W){
    if(n == 0 or W == 0)
        return 0;
    if(weight[n-1]>W){
        return knapsack(n-1, value, weight, W);
    }
    return max(knapsack(n - 1, value, weight, W - weight[n - 1] + value[n - 1]), knapsack(n - 1, value, weight, W));
}
int main()
{
    int n = 5;
    int W = 10;
    int value[5] = {1, 2, 3, 4, 5};
    int weight[5] = {1, 4, 5, 2, 1};
    cout << knapsack(n, value, weight, W);
    return 0;
}