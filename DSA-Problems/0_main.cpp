#include <iostream>
#include <cmath>
#include "1_fib.cpp"
#include "2_isPrime.cpp"
#include "3_subtractProductAndSum.cpp"
#include "4_decimalToBinary.cpp"


using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "\nfib of " << n << " is " << fib(n) << " " << endl;
    isPrime(n);
    cout << "product - sum = " << subtractProductAndSum(n) << endl;
    cout << "binary of " << n <<" is " << decimalToBinary(n) << endl;
    return 0;
}