#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void help(vector<int>& arr,vector<int>& A){
    int count = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        for(int el : A){
            if(el == arr[i]){
                count++;
            }
        }
        if(count < 1){
            A.push_back(arr[i]);
        }
            count = 0;
    }
}

vector<int> unionArrayWithoutDuplicate(vector<int>& arr1,vector<int>& arr2){
    vector<int> A;
    help(arr1,A);
    help(arr2,A);
    return A;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {4,5,6,7,8,9};

    vector<int> result = unionArrayWithoutDuplicate(arr1,arr2);
    for(int i : result){
        cout << i << ", ";
    }

    return 0;
}