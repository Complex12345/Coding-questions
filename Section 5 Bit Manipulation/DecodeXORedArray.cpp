#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded, int first) {

    vector<int> ans;
    ans.push_back(first);

    for(int i=0;i < encoded.size();i++){
        ans.push_back((ans.at(i) ^ encoded[i]));


    }
    return ans;

}
int main() {
    vector<int> arr = decode({1,2,3},1);
    cout << '{';

    for(int i=0; i < arr.size() - 1;i++){
        cout << arr[i] << ',';
    }
    cout << arr[arr.size() - 1] << '}' << endl;



    return 0;

}