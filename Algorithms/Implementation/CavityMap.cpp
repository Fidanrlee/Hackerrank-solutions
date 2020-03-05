#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
     for(int grid_i = 1; grid_i < n-1; grid_i++){
       for(int j=1;j<n-1;j++)
         if(grid[grid_i][j]>grid[grid_i][j+1] && grid[grid_i][j]>grid[grid_i][j-1])
             if(grid[grid_i][j]>grid[grid_i+1][j] && grid[grid_i][j]>grid[grid_i-1][j] )
         grid[grid_i][j]='X';
    }
      for(int grid_i = 0; grid_i < n; grid_i++){
      cout<<grid[grid_i]<<endl;
    }
    
    return 0;
}
