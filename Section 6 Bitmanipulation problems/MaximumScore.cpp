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

    for(int i=0;i< grid[0].size();i++){
        unordered_map<int,int> freq;
        for(int j=0;j< grid.size();j++){
            freq[grid[j][i]]++;

        }
//        for (auto &[pair,frequency]: freq){
//            cout << pair << "," << frequency << endl;
//        }
        //cout << "\n" << endl;
        if(freq[0] > freq[1]){
            //cout << "swapping\n" << endl;
            for(int j=0;j< grid.size();j++){
                grid[j][i] ^= 1;
            }
        }
    }
    int count =0;
    for(int i=0;i< grid.size();i++){
        int num = 0;
        for (int j = 0; j < grid[i].size(); j++) {

            num = num << 1 | grid[i][j];
            //cout << num;
        }
        //cout << endl;
        count +=num;

    }
//    for (int i = 0; i < grid.size(); i++){
//        for (int j = 0; j < grid[i].size(); j++) {
//            cout << grid[i][j];
//        }
//        cout << endl;
//    }


    return count;
}


int main(){
    cout << matrixScore({{0,0,1,1},{1,0,1,0},{1,1,0,0}});

}