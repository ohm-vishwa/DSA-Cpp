#include <iostream>
#include <utility>
using namespace std;

pair<int,int> binarySearch2DArray(int arr[5][4],int r, int c, int key){
    pair<int,int> result(-1,-1);
    int s = 0;
    int e = r-1;
    int m;

    if(key > arr[r-1][c-1] || key < arr[0][0]){
        return result;
    }
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

        // row search;
        s = 0;
        e = c-1;
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

    return result;
} 

int main(){
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int key;

    cout << "Enter number to search in 2D array : ";
    cin >> key;

    pair<int,int> resultIndex = binarySearch2DArray(arr,5,4,key);
    
    if(resultIndex.first != -1){
        cout << key << " is found at arr[" << resultIndex.first << "," << resultIndex.second << "]" << endl;
    }
    else{
        cout << "key not found." << endl;
    }

    // cout << arr[][] << endl;
    return 0;
}