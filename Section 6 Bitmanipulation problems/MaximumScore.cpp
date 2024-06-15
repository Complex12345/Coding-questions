#include<bits/stdc++.h>
using namespace std;

int matrixScore(vector<vector<int>> grid) {

    for (int i = 0; i < grid.size(); i++) {
        if (grid[i][0] == 0) {
            for (int j = 0; j < grid[i].size(); j++) {
                grid[i][j] ^= 1;
            }

        }
    }
    for (int i = 0; i < grid.size(); i++){
        for (int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }


    return 0;
}


int main(){
    cout << matrixScore({{0,0,1,1},{1,0,1,0},{1,1,0,0}});

}