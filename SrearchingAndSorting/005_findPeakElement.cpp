#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findPeakElement(vector<int> arr){
    int peak = INT_MIN;
    int start = 0;
    int end = arr.size()-1;
    int mid;

    while(end >= start){
        mid = start + (end - start) / 2;

        if((arr[mid] > arr[mid+1]) && (arr[mid] > arr[mid-1])){
            return arr[mid];
        }
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        
        if(end == mid){
            return arr[mid];
        }
    }
    return -1;
}

int main(){
    vector <int> arr = {1,2,3,5,6,7,8,9,10}; // peak element is 7
    int peak = findPeakElement(arr);
    cout << "peak element is : " << peak << endl;
    return 0;
}