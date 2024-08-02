#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void extremePrintArray(vector<int> arr){
    int last = arr.size()-1;
    for(int i = 0 ; i <= arr.size()/2 ; i++){
        cout << arr[i] << ", ";
        if(i != last){
            cout << arr[last--] << ", ";
        }
        else{
            break;
        }
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9}; //1, 9, 2, 8, 3, 7, 4, 6, 5,
    extremePrintArray(arr);
    return 0;
}