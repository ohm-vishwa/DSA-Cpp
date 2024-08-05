#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<int,int> binarySearch2DArray(vector<vector<int> > arr, int key){
    pair<int,int> result(-1,-1);
    int s = 0;
    int e = arr.size()-1;
    int m;

    //column search
    while (s <= e){
            m = s + (e-s)/2;
            result.first = m;
            result.second = 0;

        if(arr[m][0] == key){
            return result;
        }
        if(arr[m][0] < key){
            s = m+1;
        }
        else{
            e = m-1;
        }
    }
    if(key < arr[m][0]){
    result.first = result.first-1;
    }

        // row search
        s = 0;
        e = arr[0].size()-1;
    while (s <= e){
            m = s + (e-s)/2;

        if(arr[result.first][m] == key){
            result.second = m;
            return result;
        }
        if(arr[result.first][m] < key){
            s = m+1;
        }
        else{
            e = m-1;
        }
    }

    if(arr[result.first][result.second] != key){
        result.first = -1;
        result.second = -1;
        return result;
    }
    return result;
} 

int main(){
    vector<vector<int> > arr = {{1,2,3,4,5},{6,7,8,9,10},{12,14,15,17,18},{20,21,22,23,24},{26,27,29,31,33},{35,36,37,38,39},{40,41,45,67,69}};
    int key;

    cout << "Enter number to search in 2D array : ";
    cin >> key;

    pair<int,int> resultIndex = binarySearch2DArray(arr,key);
    
    if(resultIndex.first != -1){
        cout << key << " is found at arr[" << resultIndex.first << "][" << resultIndex.second << "]" << endl;
    }
    else{
        cout << "element not found." << endl;
    }
    return 0;
}