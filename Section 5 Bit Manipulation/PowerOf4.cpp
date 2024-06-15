#include<bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

bool powerOf4(int n) {
    return (n & (n-1)) == 0 and n % 3 == 1;
}

int main() {

    cout << powerOf4(4);



    return 0;

}