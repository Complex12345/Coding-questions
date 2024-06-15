#include<bits/stdc++.h>
using namespace std;

vector<int> sortByBits(vector<int> arr) {
    map<int, priority_queue<int,vector<int>, greater<>>> hashMap;

    for(int i=0;i< arr.size();i++){
        int num = arr[i];
        int count = 0;
        while(num>0){
            num = num & (num -1);
            count++;
        }
        hashMap[count].push(arr[i]);

    }
    vector<int> ans;
    for (const auto& pair : hashMap) {
        priority_queue<int,vector<int>, greater<>> values = pair.second;
        while (!values.empty()){
            ans.push_back(values.top());
            values.pop();
        }
    }

    return ans;

}
int main() {

    vector<int> arr = sortByBits({0,1,2,3,4,5,6,7,8});
    cout << '{';

    for(int i=0; i < arr.size() - 1;i++){
        cout << arr[i] << ',';
    }
    cout << arr[arr.size() - 1] << '}' << endl;



    return 0;

}