#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded) {
    int total = 0;
    for (int i = 1; i < encoded.size()+2; i++) {
        //cout << i << endl;
        total = total ^ i;
    }

    for (int i = 1; i < encoded.size(); i+=2) {
        //cout << total << endl;
        total = total ^ encoded[i];
    }
    //cout << total << endl;
    vector<int> arr = {total};

    for(int i=0;i< encoded.size();i++){
        arr.push_back(arr[i] ^ encoded[i]);
    }


    return arr;

}
int main(){
    vector<int> arr = decode({6,5,4,6});
    cout << '{';

    for(int i=0; i < arr.size() - 1;i++){
        cout << arr[i] << ',';
    }
    cout << arr[arr.size() - 1] << '}' << endl;
}