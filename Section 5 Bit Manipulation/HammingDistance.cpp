#include<bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
    int count =0;

    while(x > 0 || y > 0){
        int bitX = (x&1);
        int bitY = (y&1);
        if((bitX^bitY)) count++;

        x = x >> 1;
        y = y >> 1;
    }

    return count;



}
int main() {

    cout << hammingDistance(1,3);



    return 0;

}