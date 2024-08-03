#include <iostream>
#include <climits>
using namespace std;


void print2DArray(int arr[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }
        cout << endl;
}

void tranpose2DArray(int (& arr)[3][3]){
    int temp;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(i < j){
                break;
            }
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}
int main(){
    int arr[3][3] = {{1,2,5},{8,6,0},{2,5,2}};
    print2DArray(arr);
    tranpose2DArray(arr);
    print2DArray(arr);
    return 0;
}