#include <iostream>
#include <climits>
using namespace std;

int maxIn2DArray(int arr[3][3]){
    int max = INT_MIN;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}
int minIn2DArray(int arr[3][3]){
    int min = INT_MAX;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main(){
    int arr[3][3] = {{1,2,5},{8,6,-89},{12,54,2}};
    int max = maxIn2DArray(arr);
    cout <<"max in Array is : " << max << endl;
    int min = minIn2DArray(arr);
    cout <<"min in Array is : " << min << endl;
    return 0;
}