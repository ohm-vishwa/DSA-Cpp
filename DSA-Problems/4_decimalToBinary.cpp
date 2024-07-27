//You can execute from 0_main.cpp
#include <iostream>
using namespace std;

int decimalToBinary(int n){
    if (n == 0){
        return 0;
    }
    decimalToBinary(n >> 1);
    cout << (n % 2);
    return 0;
}


