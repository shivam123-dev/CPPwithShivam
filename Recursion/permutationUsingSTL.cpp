#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums = {1, 1, 1};
    vector<vector<int> > ans;
    do{
        ans.push_back(nums);
    }while(next_permutation(nums.begin(), nums.end()));
    for(auto i:ans){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}