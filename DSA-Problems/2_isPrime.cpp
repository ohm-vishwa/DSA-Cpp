#include <iostream>
using namespace std;

void isPrime(int n){
    bool isPrime = true;
    if(n == 1 ){
            cout << n << "is a prime number" << endl;
        return;
    }
    for (int i = n-1 ; i > 1 ; i--){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << n << " is a prime number" << endl;
    }
    else{
        cout << n << " is not a prime number" << endl;
    }     
}