#include<bits/stdc++.h>
using namespace std;



int maxArea(vector<int>& height) {
    int left =0;
    int right = height.size() - 1;
    int max = 0;

    while(left <= right){
        int min = std::min(height[left],height[right]);
        int area = min * (right - left);
        cout << "[" <<height[left] << ", " << height[right] << "] " << min << " * " << right - left << " = " << min * (right - left) << endl;

        if(area > max) max = area;

        if(height[left] == min){
            left +=1;
        }
        else{
            right -=1;
        }

    }


    return max;
}

int main(){
    vector<int> question = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(question);

}
