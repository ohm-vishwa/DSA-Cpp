#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findPeakElement(vector<int> arr){
    int peak = -1;
    int start = 0;
    int end = arr.size()-1;
    int mid;

    while(end >= start){
        mid = start + (end - start) / 2;
        peak = arr[mid];

        if((arr[mid] > arr[mid+1]) && (arr[mid] > arr[mid-1])){
            return peak;
        }
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
        cout << mid;
    return peak;
}

int main(){
    vector <int> arr = {1,2,3,5,6,3,2,1}; // peak element is 7
    int peak = findPeakElement(arr);
    cout << "peak element is : " << peak << endl;
    return 0;
}