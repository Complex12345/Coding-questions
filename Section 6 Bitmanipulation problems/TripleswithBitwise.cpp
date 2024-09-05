#include<bits/stdc++.h>
using namespace std;

int countTriplets(vector<int> nums) {
    int count =0;
    int size = nums.size();
    unordered_map<int,int> pairs;
    for(int i=0;i< size;i++){
        for(int j=0;j<size;j++){
            pairs[nums[i] & nums[j]]++;
            cout << nums[i] << "&" << nums[j] << " = " << (nums[i] & nums[j]) << endl;
        }
    }


    for (auto &[pair,frequency]: pairs){
        for(int i=0;i<size;i++){
            if((pair & nums[i]) == 0) count +=frequency;
        }
    }

    return count;

}
int main(){
    cout << countTriplets({2,1,3});

}