// elemets should be in ascending order.
#include <iostream>
#include <vector>
using namespace std;

int binarySearch1(vector<int> arr, int key){
    int start = 0;
    int end = arr.size()-1;
    int mid;

    while(end >= start){
        mid = start + (end - start) / 2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    vector <int> arr = {1,2,3,4,5,6,7,8,9,45,56};
    int key = 56;
    int index = binarySearch1(arr,key);
    cout << key << " is found at index : " << index << endl;
    return 0;
}