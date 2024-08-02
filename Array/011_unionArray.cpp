#include <iostream>
#include <climits>
#include <vector>
using namespace std;

vector<int> unionArray(vector<int>& arr1,vector<int>& arr2){
    vector<int> ans;
    for(int i : arr1){
        ans.push_back(i);
    }
    for(int i : arr2){
        ans.push_back(i);
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {4,5,6,7,8,9};

    vector<int> result = unionArray(arr1,arr2);
    for(int i : result){
        cout << i << ", ";
    }

    return 0;
}