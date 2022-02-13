#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > ans;
void s1(vector<int> arr, int idx){
    if(idx == arr.size()){
        ans.push_back(arr);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[i], arr[idx]);
        s1(arr, idx+1);
        swap(arr[i], arr[idx]);
    }    
}
vector<vector<int> > solve(vector<int> arr, int n){
    s1(arr, 0);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    vector<vector<int> > nums = solve(arr, n);
    for(auto i:nums){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}