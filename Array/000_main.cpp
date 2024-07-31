#include "myHeaderArray.h"
#include <iostream>
using namespace std;

int main(){
    //reverse array
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    fillArray(arr,n);
    cout << "Array is    : ";
    printArray(arr,n);   
    reverseArray(arr,n);
    cout << "Reverse  is : ";
    printArray(arr,n);   

    // swap Alternate
    swapAlternate(arr, n);
    cout << "Alter Swap  : ";
    printArray(arr,n);
    return 0;
}