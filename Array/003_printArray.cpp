#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    cout << "[";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i];
    if(i == n-1){
        break;
    }
        cout <<", ";
    }
    cout <<"]" << endl;
}