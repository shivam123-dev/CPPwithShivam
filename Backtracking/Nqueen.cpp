#include<iostream>
using namespace std;
bool isSafe(int** arr, int n, int x, int y){
    if(x>=n)
        return false;
    for(int row = 0; row < x; row++){
        if(arr[row][y] == 1)
            return false;
    }
    int row = x, col = y;
    while(row>=0 and col>=0){
        if(arr[row][col] == 1)
            return false;
        row--;
        col--;
    }
    row = x, col = y;
    while(row>=0 and col < n){
        if(arr[row][col] == 1)
            return false;
        row--;
        col++;
    }
    return true;
}    
bool solve(int** arr, int n, int x = 0){
    if(x>=n)
        return true;
    for(int col=0;col<n;col++){
        if(isSafe(arr, n, x, col)){
            arr[x][col] = 1;
            if(solve(arr, n, x+1))
                return true;
            arr[x][col] = 0;
        }
    }
    return false;
}
int main(){
   int n;
   cin >> n;
   int**arr = new int*[n];
   for(int i=0;i<n;i++){
      arr[i] = new int[n];
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           arr[i][j] = 0;
       }
   }
   if(solve(arr, n)){
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               cout << arr[i][j] << " ";
           }
           cout << endl;
       }
   }
   else{
       cout << "No Solution Found" << endl;
   }
   return 0;
}