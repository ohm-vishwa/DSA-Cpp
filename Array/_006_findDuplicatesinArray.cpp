#include <iostream>
#include <vector>
using namespace std;

int findDuplicatesInArray(vector<int>& arr){
    int ans = 0;
    for(int i = 0 ; i < arr.capacity() ; i++){
        ans = ans^arr[i];
    }
    for(int i = 1 ; i < arr.capacity() ; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,2,9};
    cout << endl << findDuplicatesInArray(arr)<< endl;
    return 0;
}