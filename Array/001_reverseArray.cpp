#include <iostream>
using namespace std;

void fillArray(int (&arr)[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << "Enter element for index " << i << " : ";
        cin >> arr[i];
    }
}

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

int reverseArray(int (&arr)[], int n){
    int temp;
    for(int i = 0 ; i < (n/2) ; i++){
        temp = arr[i];
        arr[i] = arr[(n-1)-i];
        arr[(n-1)-i] = temp;
    }
    return 0;
}

// int main(){
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;
//     int arr[n];
//     fillArray(arr,n);
//     reverseArray(arr,n);
//     printArray(arr,n);    
//     return 0;
// }