#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid;

    while(start <= end){
        mid = start + (end - start) / 2;
        if(arr[mid] == mid+2){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }

    if(arr[mid] == arr[mid-1]+1){
        return arr[mid]+1;
    }
    else {
        return arr[mid]-1;
    }
}

int main(){          //0,1,2,3,4,5,6,7,8,...
    vector<int> arr = {1,2,3,4,6,7,8,9,10,11,12,13};
    cout << "missing element is : " << findMissingElement(arr) << endl;
    // findMissingElement(arr);
    return 0;
}