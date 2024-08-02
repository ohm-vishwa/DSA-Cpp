#include <iostream>
#include <vector>
using namespace std;

    void swapArray(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }
void sort0sand1s(vector<int>& arr){
    int start = 0;
    int end = (arr.size() -1);

    while (start < end){
        if(arr[start] == 1 && arr[end] == 0){
        swapArray(arr[start],arr[end]);
        end--;
        start++;
        }
        else if(arr[start] == 1 && arr[end] == 1){
            end--;
        }
        else if(arr[start] == 0 && arr[end] == 0){
            start++;
        }
        else{
            start++;
            end--;
        }
    }
    
}

int main(){

    vector<int> arr = {1,0,1,0,0,1,0};
    sort0sand1s(arr);
    for(int i : arr){
        cout << i << ", ";
    }
    return 0;
}