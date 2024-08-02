#include <iostream>
#include <vector>
using namespace std;

void tripletSumArray(vector<int> arr, int n){
    for(int i : arr){
        for(int j : arr){
            for(int k : arr){
                if((i+j+k) == n){
                    cout << "(" << i << "," << j << "," << k << ") ";
                }
            }
        }
    }
}

int main(){
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9,11,16,19,23,45,67,89,43,56,32,34,21,90};
    tripletSumArray(arr,89);
    return 0;
}