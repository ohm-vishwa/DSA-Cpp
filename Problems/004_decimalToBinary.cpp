//it can be executed from 0_main.cpp
// #include <iostream>
#include <math.h>
// using namespace std;

long long int decimalToBinary(int n){
    long long int binary = 0;
    for(int i = 0 ; n != 0 ; i++){
        if(n%2){
        binary = binary + pow(10, i);
        }
        n = n >> 1;
    }
    return binary;
}

// int main(){
//     cout << decimalToBinary(5);
//     return 0;
// }