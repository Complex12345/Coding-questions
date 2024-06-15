#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int maximumScore(int a, int b, int c) {
    priority_queue<int> priorityQueue;
    priorityQueue.push(a);
    priorityQueue.push(b);
    priorityQueue.push(c);
    int count =0;



    while(true){
        int max = priorityQueue.top();
        priorityQueue.pop();
        int mid = priorityQueue.top();
        priorityQueue.pop();

        //cout << " " << mid << " " << max << endl;
        if(max ==0 || mid == 0){
            return count;
        }

        max -= 1;
        mid -=1;
        count +=1;
        priorityQueue.push(max);
        priorityQueue.push(mid);





    }
    return -1;
}

int main() {

    cout << maximumScore(4,4,6);



    return 0;

}