//it can be executed from 0_main.cpp
// #include <iostream>
// using namespace std;

bool isPrime(int n){
    bool isPrime = true;
    if(n == 1 ){
        return true;
    }
    for (int i = n-1 ; i > 1 ; i--){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;     
}

// int main(){
//     isPrime(11);
//     return 0;
// }