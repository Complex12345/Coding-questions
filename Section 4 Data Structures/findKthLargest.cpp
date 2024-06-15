#include<bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int findKthLargest(vector<int> nums, int k) {
    priority_queue<int> heap;

    for(int i=0; i < nums.size();i++){
        heap.push(nums.at(i));
    }
    for(int i=0;i< k - 1;i++){
        heap.pop();
    }
    return heap.top();

}

int main() {

    cout << findKthLargest({3,2,3,1,2,4,5,5,6},4);



    return 0;

}