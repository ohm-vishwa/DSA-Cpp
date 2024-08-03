#include <iostream>
#include <vector>
using namespace std;

void rowSum2DArray(int arr[3][3],string rc = "row"){
    int sum = 0;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(rc == "row"){
                sum += arr[i][j];
            }
            else if(rc == "col"){
                sum += arr[j][i];
            }
            else{
                cout << "Enter : row / col in third argument"<< endl;
                return;
            }
        }
        cout << rc << " " << i <<" sum is : " << sum << endl;
        sum = 0;
    }
}

int main(){
    int arr[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    rowSum2DArray(arr);
    rowSum2DArray(arr, "col");
    rowSum2DArray(arr, "column");
    return 0;
}