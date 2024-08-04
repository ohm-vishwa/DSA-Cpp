// elemets should be in ascending order.
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int key){
    int start = 0;
    int end = arr.size() -1;
    int mid = (start >> 1) + (end >> 1);

    while(end != start){
        cout << mid << endl;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        else {
            start = mid +1;
        }
        mid = (start >> 1) + (end >> 1);
    }
    return -1;
}

int main(){
    vector <int> arr = {1,2,3,5,6,7,8,9,23,45,67,89};
    int index = binarySearch(arr,3);
    cout << "key is found at index : " << index << endl;
    return 0;
}