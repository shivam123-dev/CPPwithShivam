#include<iostream>
#include<vector>
using namespace std;
bool isSafe(vector<vector<int> > maze, int x, int y, int n){
    if(x<n and y<n and maze[x][y] == 1)
        return true;
    return false;
}
bool solve(vector<vector<int> > maze, int x, int y, vector<vector<int> >solArr, int n){
    if((x == (n-1)) and (y == (n-1))){
        solArr[x][y] = 1;
        return true;
    }
    if(isSafe(maze, x, y, n)){
        solArr[x][y] = 1;
        if(solve(maze, x+1, y, solArr, n)){
            return true;
        }
        if(solve(maze, x, y+1, solArr, n)){
            return true;
        }
        solArr[x][y] = 0;
        return false;
    }
    return false;
}
int main(){
    vector<vector<int>> maze = {
        {1, 0, 1, 0, 1},
        {1, 1, 1, 1, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 1, 1},
        {1, 1, 1, 0, 1}
    };
    vector<vector<int> > solArr = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    cout << solve(maze, 0, 0, solArr, maze.size());
    return 0; 
}