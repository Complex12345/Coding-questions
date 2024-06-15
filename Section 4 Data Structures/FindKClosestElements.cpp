#include<bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) {

    int low = 0;
    int high = arr.size() - 1;

    while(low < high){
        int mid = low + (high - low) / 2;

        if(arr[mid] > x) high = mid;
        else{
            low = mid + 1;
        }

    }
    cout << low << "," << high << endl;
    int left, right;

        left = low -1;
        right = low + 1;

    priority_queue<int> heap;
    for(int i=0;i< k;i++){
        if(abs(left - low) < abs(right - low) && left > 0){
            heap.push(arr[abs(left - low)]);
            left -=1;
        }
        else{
            heap.push(arr[abs(right - low)]);
            right +=1;
        }

    }
    vector<int> ans;

    for(int i=0;i< heap.size();i++){
        ans[i] = heap.top();
        heap.pop();
    }



    return ans;
}


int main() {
    vector<int> arr = findClosestElements({1,2,3,4,5}, 4, 3);
    cout << '{';

    for(int i=0; i < arr.size() - 1;i++){
        cout << arr[i] << ',';
    }
    cout << arr[arr.size() - 1] << '}' << endl;



    return 0;

}