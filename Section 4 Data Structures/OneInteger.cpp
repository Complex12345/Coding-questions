#include<bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
    priority_queue<int,vector<int>, greater<>> heap;
    int count = 0;
    for(int num : nums){
        heap.push(num);
    }
    while(heap.size() > 1){
        int one = heap.top();
        heap.pop();
        int two = heap.top();
        heap.pop();
        int sum = one + two;
        cout << one << "+"<< two << endl;
        count +=sum;
        heap.push(sum);

    }
    return count;

}

int main() {

    cout << solve({1,2,3,4,5});



    return 0;

}