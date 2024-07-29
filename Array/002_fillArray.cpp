#include <iostream>
using namespace std;

void fillArray(int (&arr)[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << "Enter element for index " << i << " : ";
        cin >> arr[i];
    }
}