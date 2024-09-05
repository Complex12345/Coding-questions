#include<bits/stdc++.h>
using namespace std;

int totalHammingDistance(vector<int> nums) {
    int count =0;
    for(int i=0;i<32;i++){
        int ones = 0;
        for(int num : nums){
            ones += (num >> i) & 1;
        }
        count += ones * (nums.size() - ones);

    }
    return count;

}
int main(){
    cout << totalHammingDistance({4,14,2});

}