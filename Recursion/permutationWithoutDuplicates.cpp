#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> >ans;
void solve(vector<int> nums, int idx){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        if(i!=idx and nums[i] == nums[idx]){
            continue;
        }
        solve(nums, idx+1);
        swap(nums[i], nums[idx]);
    }
    return;
}
vector<vector<int> > solve1(vector<int> &nums){
    sort(nums.begin(), nums.end());
    solve(nums, 0);
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    vector<vector<int> > a = solve1(nums);
    for(auto i:a){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}