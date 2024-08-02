#include <iostream>
#include <vector>
using namespace std;

void pairSumArray(vector<int> arr, int n){
    for(int i : arr){
        for(int j : arr){
            if((i+j) == n){
                cout << "(" << i << "," << j<< ") ";
            }
        }
    }
}

int main(){
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9};
    pairSumArray(arr,9);

    return 0;
}