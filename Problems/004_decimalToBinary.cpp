//it can be executed from 0_main.cpp

#include <iostream>
using namespace std;

void decimalToBinary(int n){
    if (n == 0){
        return;
    }
    decimalToBinary(n >> 1);
    cout << (n % 2);
    return;
}

// int main(){
//     decimalToBinary(5);
//     return 0;
// }