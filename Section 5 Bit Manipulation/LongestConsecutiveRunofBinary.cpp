#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    int max = 0;
    int count =0;
    while(n > 0){

        int bit = (n&1);
        if(bit == 1){
            count +=1;
        }
        else{
            if(count > max) max = count;
            count = 0;
        }
        n = n >> 1;
        //cout << n << "," << count <<endl;
    }
    if(count > max) max = count;
    return max;

}
int main() {

    cout << solve(262141);

    return 0;

}