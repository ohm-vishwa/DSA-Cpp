//it can be executed from 0_main.cpp

// #include <iostream>
#include <math.h>
// using namespace std;

int binaryToDecimal(int n){
    int num = 0;
    for (int i = 0 ; n != 0 ; i++){
        if(n % 10 == 1){
            num = num + (pow(2,i));
        }
        n = n / 10;
    }
    return num;
}

// int main(){
//     cout << binaryToDecimal(1010) << endl;
//     return 0;
// }