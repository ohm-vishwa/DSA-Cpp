#include <iostream>
#include <vector>
using namespace std;

// element sholud be in asccending order
int findFirstOccurence(vector<int> arr, int key){
    int index = -1;
    int start = 0;
    int end = arr.size() -1;
    int mid = (start >> 1) + (end >> 1);

    while(end != start){
        if(arr[mid] == key){
            index = mid;
            end = mid-1;
            start = 0;
        }
        if(arr[mid] >= key){
            end = mid -1;
        }
        else {
            start = mid +1;
        }
        mid = (start >> 1) + (end >> 1);
    }
    return index;
}

int main(){
    vector <int> arr = {1,2,3,3,3,3,3,3,4,4,4,4,4,4,4,4,7,8,9,23,45,67,89};
    int index = findFirstOccurence(arr,4);
    // int index = 0;
    cout << "first occurence of key is found at index : " << index << endl;
    return 0;
}