// #include "myHeaderArray.h"
// #include <iostream>
// using namespace std;

void swapAlternate(int (&arr)[], int n){
    int temp;
    for(int i = 0 ; i < n-1 ; i++){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i++;
    }
}

// int main(){
//     int arr[6];
//     fillArray(arr,6);
//     cout << "before :";
//     printArray(arr,6);
//     cout << endl;
//     swapAlternate(arr,6);
//     cout << "after :";
//     printArray(arr,6);
//     return 0;
// }