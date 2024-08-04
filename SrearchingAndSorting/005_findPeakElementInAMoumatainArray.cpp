//leet code 852
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findpeakIndex(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid;

    while(end >= start){
        mid = start + (end - start) / 2;

        if((arr[mid] > arr[mid+1]) && (arr[mid] > arr[mid-1])){
            return mid;
        }
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
        cout << mid;
    return mid;
}

int main(){
    vector <int> arr = {3,4,5,1};
    int peakIndex = findpeakIndex(arr);
    cout << "peak Index is : " << peakIndex << endl;
    return 0;
}