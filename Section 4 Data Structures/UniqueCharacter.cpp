#include<bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> hashMap;

    for(int i=0;i<s.length();i++) hashMap[s[i]] +=1;

    for(int i=0;i<s.length();i++){
        if(hashMap[s[i]] == 1) return i;



    }

    return -1;

}

int main() {

    cout << firstUniqChar("hello");



    return 0;

}