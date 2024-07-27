//it can be execute from 0_main.cpp

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
#include <iostream>
using namespace std;

// int main(){
//     decimalToBinary(5);
//     return 0;
// }