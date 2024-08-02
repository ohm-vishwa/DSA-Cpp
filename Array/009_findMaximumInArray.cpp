#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int findMaximumInArray(vector<int>& arr){
    int max = INT_MIN;
    for(int el : arr){
        if(el > max){
            max = el;
        }
    }
    return max;
}

int main(){
    vector<int> arr = {8,5,6,7,3,4,5,1,2,3,4,8,-1,-3,67,34,22,45,12,54,89,45,23,45};
    int max = findMaximumInArray(arr);
    cout << "largest number in arr is : " << max << endl;
    return 0;
}