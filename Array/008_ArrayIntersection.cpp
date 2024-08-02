// #include "myHeaderArray.h"
#include <iostream>
#include <vector>
using namespace std;

//result will be stored in third argument;
vector<int> ArrayIntersection(vector<int>& arr1, vector<int>& arr2){
    vector<int> arr3;
    int el; 
    for(int i = 0 ; i < arr1.size() ; i++){
        el = arr1[i];
        for(int j = 0 ; j < arr2.size() ; j++){
            if(arr2[j] == el){
                arr3.push_back(el);
                arr2[j] = __INT_MAX__;
                break;
            }
        }
    }
    return arr3;
}

int main(){
    vector<int>arr1 = {1,2,3,6,5};
    vector<int>arr2 = {1,5,8,1,2,3,6,5};

    vector<int> result = ArrayIntersection(arr1,arr2);

    for(int el : result){
        (el = el*2);
        cout << el << ", ";
    }
    for(int el : result){
        cout << el << ", ";
    }

    return 0;
}