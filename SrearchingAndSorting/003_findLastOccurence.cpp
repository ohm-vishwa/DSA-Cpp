// elemets should be in ascending order.
#include <iostream>
#include <vector>
using namespace std;

int findLastOccurence(vector<int> arr, int key){
    int index = -1;
    int start = 0;
    int end = arr.size()-1;
    int mid;

    while(end > start){
        mid = start + (end - start) / 2;
        if(arr[mid] == key){
            index = mid;
            end = arr.size();
            start = mid+1;
        }
        if(arr[mid] > key){
            end = mid;
        }
        else {
            start = mid +1;
        }
    }
    return index;
}

// int main(){
//     vector <int> arr = {0,1,1,1,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,7,8,9,23,45,67,89};
//     int key = 2;
//     int index = findLastOccurence(arr,key);
//     // int index = 0;
//     cout << "last occurence of "<< key <<" is found at index : " << index << endl;
//     return 0;
// }